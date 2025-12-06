; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet * this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 at 0054c4bd
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 at 0054c461
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bd00
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
    PUSH ESI                            ; 0054bd01
    PUSH EDI                            ; 0054bd02
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054bd03
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054bd07
    MOV EDX,dword ptr [EDX + 0x18]      ; 0054bd0a
    MOV dword ptr [EAX + 0x1c],EDX      ; 0054bd0d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054bd10
    MOV EDX,dword ptr [EDX + 0x1c]      ; 0054bd13
    MOV dword ptr [EAX + 0x20],EDX      ; 0054bd16
    MOV ECX,0x1                         ; 0054bd19
    CMP ECX,dword ptr [EAX]             ; 0054bd1e
    JGE 0x0054bd50                      ; 0054bd20 | LAB_0054bd50
        ;   XREF to: 0054bd50 (CONDITIONAL_JUMP)
    MOV EDX,0x24                        ; 0054bd22
    MOV EBX,dword ptr [EAX + 0x4]       ; 0054bd27
        ;   Label: LAB_0054bd27
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0054bd2a
    CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18] ; 0054bd2d
    JNZ 0x0054bd54                      ; 0054bd31 | LAB_0054bd54
        ;   XREF to: 0054bd54 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x4]       ; 0054bd33
        ;   Label: LAB_0054bd33
    MOV EDI,dword ptr [EAX + 0x20]      ; 0054bd36
    CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c] ; 0054bd39
    JZ 0x0054bd46                       ; 0054bd3d | LAB_0054bd46
        ;   XREF to: 0054bd46 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x20],0x0      ; 0054bd3f
    INC ECX                             ; 0054bd46
        ;   Label: LAB_0054bd46
    MOV EBX,dword ptr [EAX]             ; 0054bd47
    ADD EDX,0x24                        ; 0054bd49
    CMP ECX,EBX                         ; 0054bd4c
    JL 0x0054bd27                       ; 0054bd4e | LAB_0054bd27
        ;   XREF to: 0054bd27 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054bd50
        ;   Label: LAB_0054bd50
    POP ESI                             ; 0054bd51
    POP EBX                             ; 0054bd52
    RET                                 ; 0054bd53
    MOV dword ptr [EAX + 0x1c],0x0      ; 0054bd54
        ;   Label: LAB_0054bd54
    JMP 0x0054bd33                      ; 0054bd5b | LAB_0054bd33
        ;   XREF to: 0054bd33 (UNCONDITIONAL_JUMP)

