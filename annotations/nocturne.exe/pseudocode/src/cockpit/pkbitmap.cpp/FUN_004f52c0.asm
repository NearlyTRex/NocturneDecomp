; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f52c0(int *param_1)
;
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0 at 004f5a0d
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920 at 004f59b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f52c0
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f52c0
    PUSH ESI                            ; 004f52c1
    PUSH EDI                            ; 004f52c2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f52c3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f52c7
    MOV EDX,dword ptr [EDX + 0x18]      ; 004f52ca
    MOV dword ptr [EAX + 0x1c],EDX      ; 004f52cd
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f52d0
    MOV EDX,dword ptr [EDX + 0x1c]      ; 004f52d3
    MOV dword ptr [EAX + 0x20],EDX      ; 004f52d6
    MOV ECX,0x1                         ; 004f52d9
    CMP ECX,dword ptr [EAX]             ; 004f52de
    JGE 0x004f5310                      ; 004f52e0
        ;   XREF to: 004f5310 (CONDITIONAL_JUMP)  ; LAB_004f5310
    MOV EDX,0x24                        ; 004f52e2
    MOV EBX,dword ptr [EAX + 0x4]       ; 004f52e7
        ;   Label: LAB_004f52e7
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004f52ea
    CMP ESI,dword ptr [EDX + EBX*0x1 + 0x18] ; 004f52ed
    JNZ 0x004f5314                      ; 004f52f1
        ;   XREF to: 004f5314 (CONDITIONAL_JUMP)  ; LAB_004f5314
    MOV EBX,dword ptr [EAX + 0x4]       ; 004f52f3
        ;   Label: LAB_004f52f3
    MOV EDI,dword ptr [EAX + 0x20]      ; 004f52f6
    CMP EDI,dword ptr [EDX + EBX*0x1 + 0x1c] ; 004f52f9
    JZ 0x004f5306                       ; 004f52fd
        ;   XREF to: 004f5306 (CONDITIONAL_JUMP)  ; LAB_004f5306
    MOV dword ptr [EAX + 0x20],0x0      ; 004f52ff
    INC ECX                             ; 004f5306
        ;   Label: LAB_004f5306
    MOV EBX,dword ptr [EAX]             ; 004f5307
    ADD EDX,0x24                        ; 004f5309
    CMP ECX,EBX                         ; 004f530c
    JL 0x004f52e7                       ; 004f530e
        ;   XREF to: 004f52e7 (CONDITIONAL_JUMP)  ; LAB_004f52e7
    POP EDI                             ; 004f5310
        ;   Label: LAB_004f5310
    POP ESI                             ; 004f5311
    POP EBX                             ; 004f5312
    RET                                 ; 004f5313
    MOV dword ptr [EAX + 0x1c],0x0      ; 004f5314
        ;   Label: LAB_004f5314
    JMP 0x004f52f3                      ; 004f531b
        ;   XREF to: 004f52f3 (UNCONDITIONAL_JUMP)  ; LAB_004f52f3

