searchByStation()
{
echo "Enter Station name to search:"
read Station
grep $Station Data.csv
} 
searchByAirQuality()
{
echo "Enter Air Quality to search"
read Air Quality
grep $Air Quality Data.csv
}
searchByO3Quality()
{
echo "Enter O3 Quality to search"
read 03 Quality
grep $O3 Quality Data.csv
}
searchByNO2Quality()
{
echo "Enter NO2 Quality to search"
read NO2 Quality
grep $NO2 Quality Data.csv
}
searchByGenerated()
{
echo "Enter Generated to search"
read Generated
grep $Generated Data.csv
}


echo "Enter 1 to search by Station"
echo "Enter 2 to search by Air Quality"
echo "Enter 3 to search by O3 Quality"
echo "Enter 4 to search by NO2 Quality"
echo "Enter 5 to search by Generated"
read choice 
if [ "$choice" -eq 1 ]; then
searchByStation
fi
if [ "$choice" -eq 2 ];then
searchByAirQuality
fi
if [ "$choice" -eq 3 ];then
searchByO3Quality
fi
if [ "$choice" -eq 4 ];then
searchByNO2Quality
fi
if [ "$choice" -eq 5 ];then
searchByGenerated
fi


