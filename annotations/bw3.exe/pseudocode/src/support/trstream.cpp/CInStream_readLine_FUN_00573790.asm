; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStream_readLine_FUN_00573790(CInStream *this_ptr,char *buffer,int size)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
;
; XREF[2]:
;   engine_font.cpp_FUN_004b01d0 at 004b0273
;   sound_sndmain.cpp_FUN_00551620 at 005517ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573790
        ;   Label: support_trstream.cpp_CInStream_readLine_FUN_00573790
    PUSH ESI                            ; 00573791
    PUSH EDI                            ; 00573792
    PUSH EBP                            ; 00573793
    MOV EDI,dword ptr [ESP + 0x14]      ; 00573794
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00573798
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057379c
    XOR ESI,ESI                         ; 005737a0
    DEC EBP                             ; 005737a2
    PUSH EDI                            ; 005737a3
        ;   Label: LAB_005737a3
    MOV EAX,dword ptr [EDI]             ; 005737a4
    CALL dword ptr [EAX + 0x4]          ; 005737a6
    ADD ESP,0x4                         ; 005737a9
    MOV EDX,EAX                         ; 005737ac
    CMP EAX,-0x1                        ; 005737ae
    JZ 0x005737cb                       ; 005737b1
        ;   XREF to: 005737cb (CONDITIONAL_JUMP)  ; LAB_005737cb
    TEST EAX,EAX                        ; 005737b3
    JL 0x005737d6                       ; 005737b5
        ;   XREF to: 005737d6 (CONDITIONAL_JUMP)  ; LAB_005737d6
    CMP EAX,0xd                         ; 005737b7
    JZ 0x005737a3                       ; 005737ba
        ;   XREF to: 005737a3 (CONDITIONAL_JUMP)  ; LAB_005737a3
    CMP EAX,0xa                         ; 005737bc
    JNZ 0x005737dd                      ; 005737bf
        ;   XREF to: 005737dd (CONDITIONAL_JUMP)  ; LAB_005737dd
    MOV byte ptr [EBX],0x0              ; 005737c1
        ;   Label: LAB_005737c1
    MOV EAX,ESI                         ; 005737c4
        ;   Label: LAB_005737c4
    POP EBP                             ; 005737c6
    POP EDI                             ; 005737c7
    POP ESI                             ; 005737c8
    POP EBX                             ; 005737c9
    RET                                 ; 005737ca
    MOV byte ptr [EBX],0x0              ; 005737cb
        ;   Label: LAB_005737cb
    TEST ESI,ESI                        ; 005737ce
    JNZ 0x005737c4                      ; 005737d0
        ;   XREF to: 005737c4 (CONDITIONAL_JUMP)  ; LAB_005737c4
    MOV ESI,EAX                         ; 005737d2
    JMP 0x005737c4                      ; 005737d4
        ;   XREF to: 005737c4 (UNCONDITIONAL_JUMP)  ; LAB_005737c4
    MOV ESI,0xfffffffe                  ; 005737d6
        ;   Label: LAB_005737d6
    JMP 0x005737c1                      ; 005737db
        ;   XREF to: 005737c1 (UNCONDITIONAL_JUMP)  ; LAB_005737c1
    CMP ESI,EBP                         ; 005737dd
        ;   Label: LAB_005737dd
    JGE 0x005737a3                      ; 005737df
        ;   XREF to: 005737a3 (CONDITIONAL_JUMP)  ; LAB_005737a3
    INC EBX                             ; 005737e1
    INC ESI                             ; 005737e2
    MOV byte ptr [EBX + -0x1],DL        ; 005737e3
    JMP 0x005737a3                      ; 005737e6
        ;   XREF to: 005737a3 (UNCONDITIONAL_JUMP)  ; LAB_005737a3

