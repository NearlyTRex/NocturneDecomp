; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280(CPod *this_ptr,char *pod_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined1       Stack[-0x430]:1  local_430
;
; XREF[3]:
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb014
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9d8e
;   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 at 004b7cf5
;
; Called Functions:
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551280
        ;   Label: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
    SUB ESP,0x42c                       ; 00551281
    MOV EAX,ESP                         ; 00551287
    PUSH EAX                            ; 00551289
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 0055128a
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0055128f
    MOV EDX,dword ptr [ESP + 0x438]     ; 00551292
    PUSH EDX                            ; 00551299
    LEA EAX,[ESP + 0x4]                 ; 0055129a
    PUSH EAX                            ; 0055129e
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 0055129f
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 005512a4
    TEST EAX,EAX                        ; 005512a7
    JZ 0x005512d1                       ; 005512a9
        ;   XREF to: 005512d1 (CONDITIONAL_JUMP)  ; LAB_005512d1
    MOV EAX,ESP                         ; 005512ab
    PUSH EAX                            ; 005512ad
    CALL engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 ; 005512ae
        ;   XREF to: 00550230 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 005512b3
    PUSH 0x0                            ; 005512b6
    MOV EBX,EAX                         ; 005512b8
    LEA EAX,[ESP + 0x4]                 ; 005512ba
    PUSH EAX                            ; 005512be
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 005512bf
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 005512c4
    MOV EAX,EBX                         ; 005512c7
    ADD ESP,0x42c                       ; 005512c9
    POP EBX                             ; 005512cf
    RET                                 ; 005512d0
    PUSH EAX                            ; 005512d1
        ;   Label: LAB_005512d1
    LEA EAX,[ESP + 0x4]                 ; 005512d2
    PUSH EAX                            ; 005512d6
    XOR EBX,EBX                         ; 005512d7
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 005512d9
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 005512de
    MOV EAX,EBX                         ; 005512e1
    ADD ESP,0x42c                       ; 005512e3
    POP EBX                             ; 005512e9
    RET                                 ; 005512ea

