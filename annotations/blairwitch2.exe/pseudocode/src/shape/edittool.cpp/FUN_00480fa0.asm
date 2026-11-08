; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480fa0(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00480dc0 at 00480de5
;   FUN_00480eb0 at 00480ef8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d260d
;   TerminatedCString s_CStrList_allocate_Can_t_005d2623
;   TerminatedCString s_shape_edittool_cpp_005d264b
;   TerminatedCString s_CStrList_allocate_invali_005d2661
;   TerminatedCString s_shape_edittool_cpp_005d2688
;   TerminatedCString s_CStrList_insert_out_of_m_005d269e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480fa0
        ;   Label: FUN_00480fa0
    PUSH ESI                            ; 00480fa1
    PUSH EDI                            ; 00480fa2
    PUSH EBP                            ; 00480fa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00480fa4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480fa8
    CMP ESI,dword ptr [EBX]             ; 00480fac
    JL 0x00480fe2                       ; 00480fae
        ;   XREF to: 00480fe2 (CONDITIONAL_JUMP)  ; LAB_00480fe2
    CMP ESI,0x1                         ; 00480fb0
        ;   Label: LAB_00480fb0
    JGE 0x00480fd8                      ; 00480fb3
        ;   XREF to: 00480fd8 (CONDITIONAL_JUMP)  ; LAB_00480fd8
    PUSH ESI                            ; 00480fb5
    MOV EBP,0x5d264b                    ; 00480fb6 | = "..\\shape\\edittool.cpp"
    MOV EAX,0xbcd                       ; 00480fbb
    PUSH 0x5d2661                       ; 00480fc0 | = "CStrList::allocate - invalid count: %d"
    MOV dword ptr [0x01d046a0],EBP      ; 00480fc5 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00480fcb | DAT_01d046a4
    CALL FUN_004e4500                   ; 00480fd0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00480fd5
    CMP ESI,dword ptr [EBX + 0x4]       ; 00480fd8
        ;   Label: LAB_00480fd8
    JG 0x00481007                       ; 00480fdb
        ;   XREF to: 00481007 (CONDITIONAL_JUMP)  ; LAB_00481007
    POP EBP                             ; 00480fdd
        ;   Label: LAB_00480fdd
    POP EDI                             ; 00480fde
    POP ESI                             ; 00480fdf
    POP EBX                             ; 00480fe0
    RET                                 ; 00480fe1
    MOV ECX,0x5d260d                    ; 00480fe2 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00480fe2
    MOV EDI,0xbcc                       ; 00480fe7
    PUSH 0x5d2623                       ; 00480fec | = "CStrList::allocate - Can't shrink list!"
    MOV dword ptr [0x01d046a0],ECX      ; 00480ff1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00480ff7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00480ffd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00481002
    JMP 0x00480fb0                      ; 00481005
        ;   XREF to: 00480fb0 (UNCONDITIONAL_JUMP)  ; LAB_00480fb0
    MOV dword ptr [EBX + 0x4],ESI       ; 00481007
        ;   Label: LAB_00481007
    LEA EAX,[ESI*0x4 + 0x0]             ; 0048100a
    PUSH EAX                            ; 00481011
    MOV ECX,dword ptr [EBX + 0x8]       ; 00481012
    PUSH ECX                            ; 00481015
    CALL FUN_005b8ce0                   ; 00481016
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 0048101b
    MOV dword ptr [EBX + 0x8],EAX       ; 0048101e
    TEST EAX,EAX                        ; 00481021
    JNZ 0x00480fdd                      ; 00481023
        ;   XREF to: 00480fdd (CONDITIONAL_JUMP)  ; LAB_00480fdd
    MOV EDI,0x5d2688                    ; 00481025 | = "..\\shape\\edittool.cpp"
    MOV EBP,0xbd1                       ; 0048102a
    PUSH 0x5d269e                       ; 0048102f | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 00481034 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0048103a | DAT_01d046a4
    CALL FUN_004e4500                   ; 00481040
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00481045
    POP EBP                             ; 00481048
    POP EDI                             ; 00481049
    POP ESI                             ; 0048104a
    POP EBX                             ; 0048104b
    RET                                 ; 0048104c

