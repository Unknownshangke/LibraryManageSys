//
// Created by shangke on 2023/11/22.
//

#ifndef LIBRARYMANAGESYS_BOOK_H
#define LIBRARYMANAGESYS_BOOK_H
class Book{
private:
    char BookName[20];
    int BookNum;
    char WriterName[20];
    int BookMethods;
    char PressName[20];
    int PublicationTime;
    float Price;
public:
    Book();

    const char *getBookName() const;

    int getBookNum() const;

    void setBookNum(int bookNum);

    const char *getWriterName() const;

    int getBookMethods() const;

    void setBookMethods(int bookMethods);

    const char *getPressName() const;

    int getPublicationTime() const;

    void setPublicationTime(int publicationTime);

    float getPrice() const;

    void setPrice(float price);

};
#endif //LIBRARYMANAGESYS_BOOK_H
