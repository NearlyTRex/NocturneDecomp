; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_00538930(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538930
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930
    PUSH ESI                            ; 00538931
    PUSH EDI                            ; 00538932
    MOV EAX,dword ptr [ESP + 0x10]      ; 00538933
    MOV EDX,dword ptr [EAX + 0x4]       ; 00538937
    MOV EDX,dword ptr [EDX + 0x18]      ; 0053893a
    MOV dword ptr [EAX + 0x1c],EDX      ; 0053893d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00538940
    MOV EDX,dword ptr [EDX + 0x1c]      ; 00538943
    MOV dword ptr [EAX + 0x20],EDX      ; 00538946
    MOV ECX,0x1                         ; 00538949
    CMP ECX,dword ptr [EAX]             ; 0053894e
    JGE 0x00538980                      ; 00538950
        ;   XREF to: 00538980 (CONDITIONAL_JUMP)  ; LAB_00538980
    MOV EDX,0x24                        ; 00538952
    MOV EBX,dword ptr [EAX + 0x4]       ; 00538957
        ;   Label: LAB_00538957
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0053895a
    CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18] ; 0053895d
    JNZ 0x00538984                      ; 00538961
        ;   XREF to: 00538984 (CONDITIONAL_JUMP)  ; LAB_00538984
    MOV EBX,dword ptr [EAX + 0x4]       ; 00538963
        ;   Label: LAB_00538963
    MOV EDI,dword ptr [EAX + 0x20]      ; 00538966
    CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c] ; 00538969
    JZ 0x00538976                       ; 0053896d
        ;   XREF to: 00538976 (CONDITIONAL_JUMP)  ; LAB_00538976
    MOV dword ptr [EAX + 0x20],0x0      ; 0053896f
    INC ECX                             ; 00538976
        ;   Label: LAB_00538976
    MOV EBX,dword ptr [EAX]             ; 00538977
    ADD EDX,0x24                        ; 00538979
    CMP ECX,EBX                         ; 0053897c
    JL 0x00538957                       ; 0053897e
        ;   XREF to: 00538957 (CONDITIONAL_JUMP)  ; LAB_00538957
    POP EDI                             ; 00538980
        ;   Label: LAB_00538980
    POP ESI                             ; 00538981
    POP EBX                             ; 00538982
    RET                                 ; 00538983
    MOV dword ptr [EAX + 0x1c],0x0      ; 00538984
        ;   Label: LAB_00538984
    JMP 0x00538963                      ; 0053898b
        ;   XREF to: 00538963 (UNCONDITIONAL_JUMP)  ; LAB_00538963

