import csv


def output(query, num):
    csv_file = csv.reader(open('Data.csv', "r"))
    for row in csv_file:
        if query in row[num - 1]:
            print('Station: ' + row[0] + ', Air Quality: ' + row[1] + ', O3 Quality: ' + row[5] + ', NO2 Quality: ' + row[8] + ', Generated: ' + row[13] + '\n')



choice = input('Enter the search type: '
               '\n 1.Station '
               '\n 2.Air Quality '
               '\n 3.O3 Quality  '
               '\n 4.NO2 Quality '
               ' \n5.Generated '
               ' \nEnter Choice in number: ')

choice = int(choice)

if choice == 1:
    query = input('Please Enter the city name: ')
    output(query, choice)

elif choice == 2:
    query = input('Please Enter the Air Quality: ')
    output(query, choice)


elif choice == 3:
    query = input('Please Enter the O3 Quality: ')
    output(query, choice)


elif choice == 4:
    query = input('Please Enter the NO2 Quality: ')
    output(query, choice)



elif choice == 5:
    query = input('Please Enter the Generated value: ')
    output(query, choice)



else:
    print("Wrong input ")
