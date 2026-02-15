; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_findFile_FUN_00551380(CPod *this_ptr,SFoundFileInfo *found_file_info)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; SFoundFileInfo * Stack[0x8]:4   found_file_info
;
; Called Functions:
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551380
        ;   Label: engine_pod.cpp_CPod_findFile_FUN_00551380
    PUSH ESI                            ; 00551381
    PUSH EDI                            ; 00551382
    PUSH EBP                            ; 00551383
    MOV EDI,dword ptr [ESP + 0x14]      ; 00551384
    MOV EBP,dword ptr [ESP + 0x18]      ; 00551388
    MOV EDX,dword ptr [EDI]             ; 0055138c
    XOR ESI,ESI                         ; 0055138e
    TEST EDX,EDX                        ; 00551390
    JLE 0x005513b1                      ; 00551392
        ;   XREF to: 005513b1 (CONDITIONAL_JUMP)  ; LAB_005513b1
    MOV EBX,EDI                         ; 00551394
    PUSH EBP                            ; 00551396
        ;   Label: LAB_00551396
    MOV EAX,dword ptr [EBX + 0x4]       ; 00551397
    PUSH EAX                            ; 0055139a
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 0055139b
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005513a0
    TEST EAX,EAX                        ; 005513a3
    JGE 0x005513b8                      ; 005513a5
        ;   XREF to: 005513b8 (CONDITIONAL_JUMP)  ; LAB_005513b8
    INC ESI                             ; 005513a7
    MOV ECX,dword ptr [EDI]             ; 005513a8
    ADD EBX,0x4                         ; 005513aa
    CMP ESI,ECX                         ; 005513ad
    JL 0x00551396                       ; 005513af
        ;   XREF to: 00551396 (CONDITIONAL_JUMP)  ; LAB_00551396
    XOR EAX,EAX                         ; 005513b1
        ;   Label: LAB_005513b1
    POP EBP                             ; 005513b3
    POP EDI                             ; 005513b4
    POP ESI                             ; 005513b5
    POP EBX                             ; 005513b6
    RET                                 ; 005513b7
    PUSH EBP                            ; 005513b8
        ;   Label: LAB_005513b8
    PUSH EAX                            ; 005513b9
    MOV EDX,dword ptr [EBX + 0x4]       ; 005513ba
    PUSH EDX                            ; 005513bd
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0 ; 005513be
        ;   XREF to: 005501b0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 005513c3
    ADD ESP,0xc                         ; 005513c8
    POP EBP                             ; 005513cb
    POP EDI                             ; 005513cc
    POP ESI                             ; 005513cd
    POP EBX                             ; 005513ce
    RET                                 ; 005513cf

