

  void readPoints (ifstream&, inPutPointFile, string& numPoints, Point pointsArray[] const int MaxPntsSize, int& numPoints){
      int pointID, x_cordinate, y_cordinate;
      pointsArray[MaxPntsSize];
      while(getline(inPutPointsFile, numPoints))
      {
          stringstream(numPoints) >> pointID >> x_cordinate >> y_cordinate;
          Point.PID = pointID;
          point.x = x_cordinate;
          point.y = y_cordinate;
          pointsArray[pointID] = point;
      }
      InputPointFile.close()
  }

  void readLines(ifstream& inPutLineFile, string& numlines, Line linesArray[],const int MaxLnsSize, int& numLines){
      int lineID, x1_cordinate, x2_cordinate, y1_cordinate, y2_cordinate;
      linesArray[MaxLnsSize];
      while(getline(inPutLineFile,numlines)){
          stringstream(numlines) >> lineID >> x1_cordinate >> y1_cordinate >> x2_cordinate >> y2_cordinate;
          Line.lID = lineID;
          line.x1 = x1_cordinate;
          line.y1 = y1_cordinate;
          line.x2 = x2_cordinate;
          line.y2 = y2_cordinate;

      }
  }


    

    return 0;
}
