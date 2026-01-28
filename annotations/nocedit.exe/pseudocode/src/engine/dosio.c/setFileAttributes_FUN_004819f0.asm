; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_dosio_c_setFileAttributes_FUN_004819f0(char *filename,byte flags)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; byte             Stack[0x8]:1   flags
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3f00
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b46fb
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb7da
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bada6
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b99b7
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 at 004b33ea
;
; Called Functions:
;   crt_file.c_setReadonlyAttribute_FUN_00600c30
;
; *****************************************************************************

section .text

    MOV DL,byte ptr [ESP + 0x8]         ; 004819f0
        ;   Label: engine_dosio.c_setFileAttributes_FUN_004819f0
    MOV EAX,0x180                       ; 004819f4
    TEST DL,0x8                         ; 004819f9
    JZ 0x00481a03                       ; 004819fc
        ;   XREF to: 00481a03 (CONDITIONAL_JUMP)  ; LAB_00481a03
    MOV EAX,0x100                       ; 004819fe
    PUSH EAX                            ; 00481a03
        ;   Label: LAB_00481a03
    MOV EDX,dword ptr [ESP + 0x8]       ; 00481a04
    PUSH EDX                            ; 00481a08
    CALL crt_file.c_setReadonlyAttribute_FUN_00600c30 ; 00481a09
        ;   XREF to: 00600c30 (UNCONDITIONAL_CALL)  ; DWORD crt_file.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 00481a0e
    TEST EAX,EAX                        ; 00481a11
    SETZ AL                             ; 00481a13
    AND EAX,0xff                        ; 00481a16
    RET                                 ; 00481a1b

