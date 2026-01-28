// Name: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
// Address: 00550590
// Address Range: [[00550590, 005506ba]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590 (CPodFile *this_ptr,int record_index,void *output_buffer)

#include "nocturne.h"

void __cdecl
engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
          (CPodFile *this_ptr,int record_index,void *output_buffer)

{
  FILE *file;
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint local_144 [78];
  
  bVar3 = 0;
  if ((record_index < 0) || ((int)this_ptr->audit_count <= record_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x308;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x30c);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x30d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getAuditRecord - can't open %s",this_ptr->filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc(file,record_index * 0x138 + this_ptr->total_file_size,0);
  crt_stdio_c_fread_FUN_005fd990(local_144,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x31b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getAuditRecord - error reading %s",this_ptr->filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",800);
  puVar2 = local_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)output_buffer = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    output_buffer = (uint *)((int)output_buffer + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
