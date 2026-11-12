; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_0048a960(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_calloc_FUN_005c1cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a960
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_0048a960
    PUSH EBP                            ; 0048a961
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048a962
    MOV EAX,dword ptr [EBX + 0x40]      ; 0048a966
    IMUL EAX,dword ptr [EBX + 0x44]     ; 0048a969
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0048a96d
    PUSH EAX                            ; 0048a971
    PUSH 0x58                           ; 0048a972
    CALL crt_memory.c_calloc_FUN_005c1cb0 ; 0048a974
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005c1cb0()
    ADD ESP,0x8                         ; 0048a979
    MOV dword ptr [EBX + 0x4c],EAX      ; 0048a97c
    TEST EAX,EAX                        ; 0048a97f
    JZ 0x0048a986                       ; 0048a981
        ;   XREF to: 0048a986 (CONDITIONAL_JUMP)  ; LAB_0048a986
    POP EBP                             ; 0048a983
    POP EBX                             ; 0048a984
    RET                                 ; 0048a985
    PUSH EDI                            ; 0048a986
        ;   Label: LAB_0048a986
    MOV EDI,0x5db744                    ; 0048a987
    MOV EBP,0x88                        ; 0048a98c
    PUSH 0x5db757                       ; 0048a991
    MOV dword ptr [0x01d1d400],EDI      ; 0048a996 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0048a99c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048a9a2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048a9a7
    POP EDI                             ; 0048a9aa
    POP EBP                             ; 0048a9ab
    POP EBX                             ; 0048a9ac
    RET                                 ; 0048a9ad

