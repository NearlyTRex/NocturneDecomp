; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_004f17d0(int y,int *exclude)
;
; Parameters:
; int              Stack[0x4]:4   y
; int *            Stack[0x8]:4   exclude
;
; Referenced Globals:
;   undefined4 DAT_01d80844
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f17d0
        ;   Label: engine_mini3d.cpp_findScanEdge_FUN_004f17d0
    PUSH ESI                            ; 004f17d1
    MOV EBX,dword ptr [0x01d80844]      ; 004f17d2 | DAT_01d80844
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f17d8
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f17dc
    MOV EAX,0x1d80848                   ; 004f17e0
    XOR EDX,EDX                         ; 004f17e5
    TEST EBX,EBX                        ; 004f17e7
    JLE 0x004f17fb                      ; 004f17e9
        ;   XREF to: 004f17fb (CONDITIONAL_JUMP)  ; LAB_004f17fb
    CMP ECX,dword ptr [EAX]             ; 004f17eb
        ;   Label: LAB_004f17eb
    JNZ 0x004f17f3                      ; 004f17ed
        ;   XREF to: 004f17f3 (CONDITIONAL_JUMP)  ; LAB_004f17f3
    CMP EAX,ESI                         ; 004f17ef
    JNZ 0x004f17fd                      ; 004f17f1
        ;   XREF to: 004f17fd (CONDITIONAL_JUMP)  ; LAB_004f17fd
    INC EDX                             ; 004f17f3
        ;   Label: LAB_004f17f3
    ADD EAX,0x50                        ; 004f17f4
    CMP EDX,EBX                         ; 004f17f7
    JL 0x004f17eb                       ; 004f17f9
        ;   XREF to: 004f17eb (CONDITIONAL_JUMP)  ; LAB_004f17eb
    XOR EAX,EAX                         ; 004f17fb
        ;   Label: LAB_004f17fb
    MOV dword ptr [0x01d80844],EBX      ; 004f17fd | DAT_01d80844
        ;   Label: LAB_004f17fd
    POP ESI                             ; 004f1803
    POP EBX                             ; 004f1804
    RET                                 ; 004f1805

