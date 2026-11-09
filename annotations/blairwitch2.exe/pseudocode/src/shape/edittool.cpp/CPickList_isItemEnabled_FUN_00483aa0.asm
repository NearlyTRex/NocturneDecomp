; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList *this_ptr,int item_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
;
; XREF[6]:
;   shape_edittool.cpp_FUN_00482350 at 00482387
;   shape_edittool.cpp_FUN_00482770 at 0048279a
;   shape_edittool.cpp_FUN_004831d0 at 0048363c
;   shape_edittool.cpp_FUN_00483c30 at 00483c59
;   shape_edittool.cpp_FUN_00483cb0 at 00483cdf
;   shape_edittool.cpp_FUN_00483e10 at 00483e2d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2997
;   TerminatedCString s_CPickList_isItemEnabled_005d29ad
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483aa0
        ;   Label: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
    PUSH ESI                            ; 00483aa1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483aa2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00483aa6
    TEST EBX,EBX                        ; 00483aaa
    JL 0x00483ab2                       ; 00483aac
        ;   XREF to: 00483ab2 (CONDITIONAL_JUMP)  ; LAB_00483ab2
    CMP EBX,dword ptr [ESI]             ; 00483aae
    JL 0x00483ad7                       ; 00483ab0
        ;   XREF to: 00483ad7 (CONDITIONAL_JUMP)  ; LAB_00483ad7
    PUSH EDI                            ; 00483ab2
        ;   Label: LAB_00483ab2
    MOV ECX,0x5d2997                    ; 00483ab3 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x1104                      ; 00483ab8
    PUSH 0x5d29ad                       ; 00483abd | = "CPickList::isItemEnabled - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 00483ac2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00483ac8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00483ace
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00483ad3
    POP EDI                             ; 00483ad6
    CMP EBX,dword ptr [ESI + 0x1ac]     ; 00483ad7
        ;   Label: LAB_00483ad7
    JL 0x00483ae7                       ; 00483add
        ;   XREF to: 00483ae7 (CONDITIONAL_JUMP)  ; LAB_00483ae7
    MOV EAX,0x1                         ; 00483adf
    POP ESI                             ; 00483ae4
    POP EBX                             ; 00483ae5
    RET                                 ; 00483ae6
    MOV EAX,dword ptr [ESI + 0x1b0]     ; 00483ae7
        ;   Label: LAB_00483ae7
    CMP dword ptr [EAX + EBX*0x4],0x0   ; 00483aed
    SETNZ AL                            ; 00483af1
    AND EAX,0xff                        ; 00483af4
    POP ESI                             ; 00483af9
    POP EBX                             ; 00483afa
    RET                                 ; 00483afb

