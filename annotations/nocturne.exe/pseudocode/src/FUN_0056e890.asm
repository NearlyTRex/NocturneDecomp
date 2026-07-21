; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_0056e890(HMODULE param_1,LPWSTR param_2,DWORD param_3)
;
;
; XREF[1]:
;   FUN_0056720c at 005672f0
;
; Referenced Globals:
;   void* PTR_GetModuleFileNameA_00575524 = 00175d90
;   void* PTR_GetModuleFileNameW_00575528 = 00175da6
;   void* PTR_GetVersion_00575540 = 00175e18
;   void* PTR_MultiByteToWideChar_0057556c = 00175ee0
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   FUN_005638d0
;   FUN_005713e0
;   GetModuleFileNameA
;   GetModuleFileNameW
;   GetVersion
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e890
        ;   Label: FUN_0056e890
    PUSH ESI                            ; 0056e891
    PUSH EDI                            ; 0056e892
    PUSH EBP                            ; 0056e893
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056e894
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056e898
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056e89c
    CALL dword ptr CS:[0x575540]        ; 0056e8a0 | PTR_GetVersion_00575540
    SHR EAX,0x10                        ; 0056e8a7
    AND EAX,0xffff                      ; 0056e8aa
    CMP AX,0x8000                       ; 0056e8af
    JNC 0x0056e8c4                      ; 0056e8b3
        ;   XREF to: 0056e8c4 (CONDITIONAL_JUMP)  ; LAB_0056e8c4
    PUSH EBP                            ; 0056e8b5
    PUSH ESI                            ; 0056e8b6
    PUSH EDI                            ; 0056e8b7
    CALL dword ptr CS:[0x575528]        ; 0056e8b8 | PTR_GetModuleFileNameW_00575528
    POP EBP                             ; 0056e8bf
    POP EDI                             ; 0056e8c0
    POP ESI                             ; 0056e8c1
    POP EBX                             ; 0056e8c2
    RET                                 ; 0056e8c3
    PUSH 0x208                          ; 0056e8c4
        ;   Label: LAB_0056e8c4
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0056e8c9
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    MOV EBX,EAX                         ; 0056e8ce
    ADD ESP,0x4                         ; 0056e8d0
    TEST EAX,EAX                        ; 0056e8d3
    JZ 0x0056e92f                       ; 0056e8d5
        ;   XREF to: 0056e92f (CONDITIONAL_JUMP)  ; LAB_0056e92f
    PUSH 0x208                          ; 0056e8d7
    PUSH EAX                            ; 0056e8dc
    PUSH EDI                            ; 0056e8dd
    CALL dword ptr CS:[0x575524]        ; 0056e8de | PTR_GetModuleFileNameA_00575524
    TEST EAX,EAX                        ; 0056e8e5
    JNZ 0x0056e8f9                      ; 0056e8e7
        ;   XREF to: 0056e8f9 (CONDITIONAL_JUMP)  ; LAB_0056e8f9
    PUSH EBX                            ; 0056e8e9
    CALL FUN_005638d0                   ; 0056e8ea
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0056e8ef
    XOR EAX,EAX                         ; 0056e8f2
    POP EBP                             ; 0056e8f4
    POP EDI                             ; 0056e8f5
    POP ESI                             ; 0056e8f6
    POP EBX                             ; 0056e8f7
    RET                                 ; 0056e8f8
    PUSH EBP                            ; 0056e8f9
        ;   Label: LAB_0056e8f9
    PUSH ESI                            ; 0056e8fa
    PUSH -0x1                           ; 0056e8fb
    PUSH EBX                            ; 0056e8fd
    PUSH 0x1                            ; 0056e8fe
    PUSH 0x1                            ; 0056e900
    CALL dword ptr CS:[0x57556c]        ; 0056e902 | PTR_MultiByteToWideChar_0057556c
    PUSH EBX                            ; 0056e909
    MOV EDI,EAX                         ; 0056e90a
    CALL FUN_005638d0                   ; 0056e90c
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0056e911
    TEST EDI,EDI                        ; 0056e914
    JNZ 0x0056e91f                      ; 0056e916
        ;   XREF to: 0056e91f (CONDITIONAL_JUMP)  ; LAB_0056e91f
    XOR EAX,EAX                         ; 0056e918
    POP EBP                             ; 0056e91a
    POP EDI                             ; 0056e91b
    POP ESI                             ; 0056e91c
    POP EBX                             ; 0056e91d
    RET                                 ; 0056e91e
    PUSH ESI                            ; 0056e91f
        ;   Label: LAB_0056e91f
    MOV word ptr [ESI + EBP*0x2 + -0x2],0x0 ; 0056e920
    CALL FUN_005713e0                   ; 0056e927
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005713e0()
    ADD ESP,0x4                         ; 0056e92c
    POP EBP                             ; 0056e92f
        ;   Label: LAB_0056e92f
    POP EDI                             ; 0056e930
    POP ESI                             ; 0056e931
    POP EBX                             ; 0056e932
    RET                                 ; 0056e933

