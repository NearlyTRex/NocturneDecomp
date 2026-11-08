; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499830(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0049c3e0 at 0049c459
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc48f
;   TerminatedCString s_CStrList_sort_invalid_ra_005dc4a5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005bfc68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499830
        ;   Label: FUN_00499830
    PUSH ESI                            ; 00499831
    MOV EBX,dword ptr [ESP + 0x10]      ; 00499832
    MOV ESI,dword ptr [ESP + 0x14]      ; 00499836
    CMP EBX,ESI                         ; 0049983a
    JGE 0x00499891                      ; 0049983c
        ;   XREF to: 00499891 (CONDITIONAL_JUMP)  ; LAB_00499891
    TEST EBX,EBX                        ; 0049983e
    JL 0x0049984a                       ; 00499840
        ;   XREF to: 0049984a (CONDITIONAL_JUMP)  ; LAB_0049984a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00499842
    CMP ESI,dword ptr [EAX]             ; 00499846
    JL 0x0049986f                       ; 00499848
        ;   XREF to: 0049986f (CONDITIONAL_JUMP)  ; LAB_0049986f
    PUSH EDI                            ; 0049984a
        ;   Label: LAB_0049984a
    MOV ECX,0x5dc48f                    ; 0049984b | = "..\\shape\\edittool.cpp"
    MOV EDI,0xca3                       ; 00499850
    PUSH 0x5dc4a5                       ; 00499855 | = "CStrList::sort - invalid range!"
    MOV dword ptr [0x01d1d400],ECX      ; 0049985a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499860 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00499866
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049986b
    POP EDI                             ; 0049986e
    MOV EAX,ESI                         ; 0049986f
        ;   Label: LAB_0049986f
    PUSH 0x499810                       ; 00499871 | LAB_00499810
    SUB EAX,EBX                         ; 00499876
    PUSH 0x4                            ; 00499878
    INC EAX                             ; 0049987a
    PUSH EAX                            ; 0049987b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049987c
    SHL EBX,0x2                         ; 00499880
    MOV EAX,dword ptr [EAX + 0x8]       ; 00499883
    ADD EAX,EBX                         ; 00499886
    PUSH EAX                            ; 00499888
    CALL FUN_005bfc68                   ; 00499889
        ;   XREF to: 005bfc68 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc68()
    ADD ESP,0x10                        ; 0049988e
    POP ESI                             ; 00499891
        ;   Label: LAB_00499891
    POP EBX                             ; 00499892
    RET                                 ; 00499893

