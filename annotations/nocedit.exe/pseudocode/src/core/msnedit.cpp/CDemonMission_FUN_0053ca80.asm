; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539cf3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053ca80
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053ca80
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053ca81
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053ca85
    MOV EAX,ESI                         ; 0053ca89
    TEST ESI,ESI                        ; 0053ca8b
    JNZ 0x0053ca95                      ; 0053ca8d
        ;   XREF to: 0053ca95 (CONDITIONAL_JUMP)  ; LAB_0053ca95
    MOV EAX,dword ptr [ECX + 0x54c]     ; 0053ca8f
    TEST EAX,EAX                        ; 0053ca95
        ;   Label: LAB_0053ca95
    JZ 0x0053cac1                       ; 0053ca97
        ;   XREF to: 0053cac1 (CONDITIONAL_JUMP)  ; LAB_0053cac1
    PUSH EDI                            ; 0053ca99
    XOR EDX,EDX                         ; 0053ca9a
    MOV EAX,dword ptr [EAX + 0x150]     ; 0053ca9c
        ;   Label: LAB_0053ca9c
    TEST EAX,EAX                        ; 0053caa2
    JNZ 0x0053caac                      ; 0053caa4
        ;   XREF to: 0053caac (CONDITIONAL_JUMP)  ; LAB_0053caac
    MOV EAX,dword ptr [ECX + 0x54c]     ; 0053caa6
    CMP EAX,ESI                         ; 0053caac
        ;   Label: LAB_0053caac
    JZ 0x0053cac0                       ; 0053caae
        ;   XREF to: 0053cac0 (CONDITIONAL_JUMP)  ; LAB_0053cac0
    MOV EDI,dword ptr [ECX]             ; 0053cab0
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0053cab2
    JZ 0x0053cac3                       ; 0053cab5
        ;   XREF to: 0053cac3 (CONDITIONAL_JUMP)  ; LAB_0053cac3
    INC EDX                             ; 0053cab7
        ;   Label: LAB_0053cab7
    CMP EDX,0x3e8                       ; 0053cab8
    JL 0x0053ca9c                       ; 0053cabe
        ;   XREF to: 0053ca9c (CONDITIONAL_JUMP)  ; LAB_0053ca9c
    POP EDI                             ; 0053cac0
        ;   Label: LAB_0053cac0
    POP ESI                             ; 0053cac1
        ;   Label: LAB_0053cac1
    RET                                 ; 0053cac2
    CMP dword ptr [EAX + 0x148],0x0     ; 0053cac3
        ;   Label: LAB_0053cac3
    JNZ 0x0053cab7                      ; 0053caca
        ;   XREF to: 0053cab7 (CONDITIONAL_JUMP)  ; LAB_0053cab7
    POP EDI                             ; 0053cacc
    POP ESI                             ; 0053cacd
    RET                                 ; 0053cace

