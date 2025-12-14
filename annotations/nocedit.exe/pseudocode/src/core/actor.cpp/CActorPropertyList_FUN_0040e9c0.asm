; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_actor.cpp_CActorPropertyList_FUN_0040e9c0()
;
;
; XREF[1]:
;   core_msnedit.cpp_FUN_0053c4f0 at 0053c649
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e9c0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e9c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040e9c1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e9c5
    SUB EDX,dword ptr [ECX + 0x2500]    ; 0040e9c9
    MOV EBX,0xe                         ; 0040e9cf
    MOV EAX,EDX                         ; 0040e9d4
    SAR EDX,0x1f                        ; 0040e9d6
    IDIV EBX                            ; 0040e9d9
    TEST EAX,EAX                        ; 0040e9db
    JL 0x0040e9f8                       ; 0040e9dd
        ;   XREF to: 0040e9f8 (CONDITIONAL_JUMP)  ; LAB_0040e9f8
    CMP EAX,dword ptr [ECX + 0x4]       ; 0040e9df
    JGE 0x0040e9f8                      ; 0040e9e2
        ;   XREF to: 0040e9f8 (CONDITIONAL_JUMP)  ; LAB_0040e9f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e9e4
    CMP EDX,dword ptr [ECX + 0x24f8]    ; 0040e9e8
    JL 0x0040e9f8                       ; 0040e9ee
        ;   XREF to: 0040e9f8 (CONDITIONAL_JUMP)  ; LAB_0040e9f8
    CMP EDX,dword ptr [ECX + 0x24fc]    ; 0040e9f0
    JLE 0x0040e9fd                      ; 0040e9f6
        ;   XREF to: 0040e9fd (CONDITIONAL_JUMP)  ; LAB_0040e9fd
    MOV EAX,0xffffffff                  ; 0040e9f8
        ;   Label: LAB_0040e9f8
    POP EBX                             ; 0040e9fd
        ;   Label: LAB_0040e9fd
    RET                                 ; 0040e9fe

