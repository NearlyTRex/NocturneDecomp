// Name: crt_fstream.cpp_filebuf_open_FUN_00608c15
// Address: 00608c15
// Address Range: [[00608c15, 00608cd0]]
// Convention: __cdecl
// Signature: int __cdecl crt_fstream_cpp_filebuf_open_FUN_00608c15(filebuf *this_ptr,char *filename,int mode,int permissions)

#include "nocturne.h"

int __cdecl
crt_fstream_cpp_filebuf_open_FUN_00608c15(filebuf *this_ptr,char *filename,int mode,int permissions)

{
  int iVar1;
  
  if (this_ptr->__file_handle == -1) {
    if ((mode & 8U) != 0) {
      mode = mode | 2;
    }
    if (((mode & 2U) != 0) && ((mode & 0xdU) == 0)) {
      mode = mode | 0x10;
    }
    if ((((mode & 0x100U) == 0) || ((mode & 0x80U) == 0)) &&
       (((mode & 0x40U) == 0 || ((mode & 0x20U) == 0)))) {
      iVar1 = crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340(filename,&mode,permissions);
      this_ptr->__file_handle = iVar1;
      if (-1 < iVar1) {
        this_ptr->__file_mode = mode;
        this_ptr->__attached = this_ptr->__attached & 0xfe;
        if ((mode & 4U) != 0) {
          (*this_ptr->__vtable->seekoff)(&this_ptr->_streambuf,0,2,mode);
        }
        return (int)this_ptr;
      }
      this_ptr->__file_handle = -1;
    }
  }
  return 0;
}
