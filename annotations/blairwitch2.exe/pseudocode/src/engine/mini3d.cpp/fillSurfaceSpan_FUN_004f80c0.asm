; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_fillSurfaceSpan_FUN_004f80c0(int row,int x0,int x1)
;
; Parameters:
; int              Stack[0x4]:4   row
; int              Stack[0x8]:4   x0
; int              Stack[0xc]:4   x1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f80c0
        ;   Label: engine_mini3d.cpp_fillSurfaceSpan_FUN_004f80c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f80c1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f80c5
    CMP EAX,ECX                         ; 004f80c9
    JLE 0x004f80d3                      ; 004f80cb
        ;   XREF to: 004f80d3 (CONDITIONAL_JUMP)  ; LAB_004f80d3
    MOV EDX,EAX                         ; 004f80cd
    MOV EAX,ECX                         ; 004f80cf
    MOV ECX,EDX                         ; 004f80d1
    SAR EAX,0x10                        ; 004f80d3
        ;   Label: LAB_004f80d3
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f80d6
    LEA EBX,[EAX*0x4 + 0x0]             ; 004f80da
    MOV EDX,dword ptr [EDX*0x4 + 0x1c2a38c] ; 004f80e1
    SAR ECX,0x10                        ; 004f80e8
    ADD EDX,EBX                         ; 004f80eb
    CMP EAX,ECX                         ; 004f80ed
    JGE 0x004f8100                      ; 004f80ef
        ;   XREF to: 004f8100 (CONDITIONAL_JUMP)  ; LAB_004f8100
    INC EAX                             ; 004f80f1
        ;   Label: LAB_004f80f1
    MOV dword ptr [EDX],0x80000000      ; 004f80f2
    ADD EDX,0x4                         ; 004f80f8
    CMP EAX,ECX                         ; 004f80fb
    JL 0x004f80f1                       ; 004f80fd
        ;   XREF to: 004f80f1 (CONDITIONAL_JUMP)  ; LAB_004f80f1
    NOP                                 ; 004f80ff
    POP EBX                             ; 004f8100
        ;   Label: LAB_004f8100
    RET                                 ; 004f8101

