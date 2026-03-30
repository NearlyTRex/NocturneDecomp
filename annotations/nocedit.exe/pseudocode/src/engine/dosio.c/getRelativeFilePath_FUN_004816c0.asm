; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_c_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   dest_path
; char *           Stack[0x8]:4   directory
; char *           Stack[0xc]:4   filename
;
; XREF[7]:
;   engine_dosio.c_getFileSizeWithFinder_FUN_00481960 at 0048197c
;   engine_dosio.c_getFileSize_FUN_00481880 at 0048189b
;   engine_dosio.c_getFileTimestamp_FUN_004818d0 at 004818eb
;   engine_dosio.c_getFile_FUN_00481a50 at 00481a77
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481b90
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 at 0054f682
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0 at 00551318
;
; Referenced Globals:
;   TerminatedCString s_s_s_00621571
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004816c0
        ;   Label: engine_dosio.c_getRelativeFilePath_FUN_004816c0
    PUSH EDI                            ; 004816c1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004816c2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004816c6
    MOV ESI,dword ptr [ESP + 0x14]      ; 004816ca
    TEST EAX,EAX                        ; 004816ce
    JZ 0x004816ea                       ; 004816d0
        ;   XREF to: 004816ea (CONDITIONAL_JUMP)  ; LAB_004816ea
    CMP byte ptr [EAX],0x0              ; 004816d2
    JZ 0x004816ea                       ; 004816d5
        ;   XREF to: 004816ea (CONDITIONAL_JUMP)  ; LAB_004816ea
    PUSH ESI                            ; 004816d7
    PUSH EAX                            ; 004816d8
    PUSH 0x621571                       ; 004816d9 | = "%s\\%s"
    PUSH EDI                            ; 004816de
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004816df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004816e4
    POP EDI                             ; 004816e7
    POP ESI                             ; 004816e8
    RET                                 ; 004816e9
    PUSH EDI                            ; 004816ea
        ;   Label: LAB_004816ea
    MOV AL,byte ptr [ESI]               ; 004816eb
        ;   Label: LAB_004816eb
    MOV byte ptr [EDI],AL               ; 004816ed
    CMP AL,0x0                          ; 004816ef
    JZ 0x00481703                       ; 004816f1
        ;   XREF to: 00481703 (CONDITIONAL_JUMP)  ; LAB_00481703
    MOV AL,byte ptr [ESI + 0x1]         ; 004816f3
    ADD ESI,0x2                         ; 004816f6
    MOV byte ptr [EDI + 0x1],AL         ; 004816f9
    ADD EDI,0x2                         ; 004816fc
    CMP AL,0x0                          ; 004816ff
    JNZ 0x004816eb                      ; 00481701
        ;   XREF to: 004816eb (CONDITIONAL_JUMP)  ; LAB_004816eb
    POP EDI                             ; 00481703
        ;   Label: LAB_00481703
    POP EDI                             ; 00481704
    POP ESI                             ; 00481705
    RET                                 ; 00481706

