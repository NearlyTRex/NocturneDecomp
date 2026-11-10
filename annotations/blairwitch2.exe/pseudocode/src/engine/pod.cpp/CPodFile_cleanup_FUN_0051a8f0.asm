; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_CPodFile_dtor_FUN_00519ec0 at 00519ec6
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 at 00519f1b
;   engine_pod.cpp_FUN_0051b6dc at 0051b755
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a8f0
        ;   Label: engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0
    PUSH ESI                            ; 0051a8f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051a8f2
    MOV EDX,dword ptr [EBX + 0x414]     ; 0051a8f6
    MOV dword ptr [EBX + 0x410],0x0     ; 0051a8fc
    TEST EDX,EDX                        ; 0051a906
    JNZ 0x0051a95e                      ; 0051a908
        ;   XREF to: 0051a95e (CONDITIONAL_JUMP)  ; LAB_0051a95e
    MOV dword ptr [EBX + 0x424],0x0     ; 0051a90a
        ;   Label: LAB_0051a90a
    MOV ESI,dword ptr [EBX + 0x418]     ; 0051a914
    MOV dword ptr [EBX + 0x41c],0x0     ; 0051a91a
    TEST ESI,ESI                        ; 0051a924
    JNZ 0x0051a973                      ; 0051a926
        ;   XREF to: 0051a973 (CONDITIONAL_JUMP)  ; LAB_0051a973
    MOV dword ptr [EBX],0x0             ; 0051a928
        ;   Label: LAB_0051a928
    MOV byte ptr [EBX + 0x108],0x0      ; 0051a92e
    MOV byte ptr [EBX + 0x208],0x0      ; 0051a935
    MOV byte ptr [EBX + 0x308],0x0      ; 0051a93c
    MOV dword ptr [EBX + 0x408],0x3e8   ; 0051a943
    MOV dword ptr [EBX + 0x40c],0x3e8   ; 0051a94d
    MOV byte ptr [EBX + 0x4],0x0        ; 0051a957
    POP ESI                             ; 0051a95b
    POP EBX                             ; 0051a95c
    RET                                 ; 0051a95d
    PUSH EDX                            ; 0051a95e
        ;   Label: LAB_0051a95e
    CALL crt_unknown.c_FUN_005b86a0     ; 0051a95f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0051a964
    MOV dword ptr [EBX + 0x414],0x0     ; 0051a967
    JMP 0x0051a90a                      ; 0051a971
        ;   XREF to: 0051a90a (UNCONDITIONAL_JUMP)  ; LAB_0051a90a
    PUSH ESI                            ; 0051a973
        ;   Label: LAB_0051a973
    CALL crt_unknown.c_FUN_005b86a0     ; 0051a974
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0051a979
    MOV dword ptr [EBX + 0x418],0x0     ; 0051a97c
    JMP 0x0051a928                      ; 0051a986
        ;   XREF to: 0051a928 (UNCONDITIONAL_JUMP)  ; LAB_0051a928

