#include "main.h"



int main(int argc, char* argv [])
{
	
	clJobSliceFile sliFile;
	clSliceData sliceData;


	if (argc > 1)
	{
		sliFile.readFromFile(argv[1]);
	}
	else
	{
		sliFile.readFromFile("C:\\Users\\kaho2\\EOS-Formats\\examples\\box_job.job");
	}



	sliFile.readSliceData(&sliceData, 0, 0);

	clSliceData::tyMatrix TransMatrix;
	clSliceData::IdentityMatrix(&TransMatrix);

	int partCount = sliceData.getPartCount();
	for (int part = 0; part < partCount; part++)
	{
		int objectCount = sliceData.getObjectCount(part);
		for (int object = 0; object < objectCount; object++)
		{
			//float * points = sliceData.getObjectPointsTransformed(part, object, TransMatrix);


			//sliceData.drawRasteredObject(&imgFilled, &imgPolyLine, part, object, TransMatrix, object, w, h);
		}
	}

	system("pause");
}





