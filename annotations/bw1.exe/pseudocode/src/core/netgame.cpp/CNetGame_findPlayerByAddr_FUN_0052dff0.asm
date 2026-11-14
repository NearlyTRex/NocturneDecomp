; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_0052dff0(CNetGame *this_ptr,SNetworkAddr *addr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   addr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_0052d450 at 0052d46c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dff0
        ;   Label: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_0052dff0
    PUSH ESI                            ; 0052dff1
    PUSH EDI                            ; 0052dff2
    PUSH EBP                            ; 0052dff3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052dff4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052dff8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052dffc
    XOR EDX,EDX                         ; 0052dfff
    TEST ECX,ECX                        ; 0052e001
    JLE 0x0052e023                      ; 0052e003
        ;   XREF to: 0052e023 (CONDITIONAL_JUMP)  ; LAB_0052e023
    LEA EAX,[ESI + 0x3c]                ; 0052e005
    MOV DI,word ptr [EAX + 0x4]         ; 0052e008
        ;   Label: LAB_0052e008
    CMP DI,word ptr [EBX + 0x4]         ; 0052e00c
    JNZ 0x0052e018                      ; 0052e010
        ;   XREF to: 0052e018 (CONDITIONAL_JUMP)  ; LAB_0052e018
    MOV EBP,dword ptr [EBX]             ; 0052e012
    CMP EBP,dword ptr [EAX]             ; 0052e014
    JZ 0x0052e02d                       ; 0052e016
        ;   XREF to: 0052e02d (CONDITIONAL_JUMP)  ; LAB_0052e02d
    INC EDX                             ; 0052e018
        ;   Label: LAB_0052e018
    MOV EDI,dword ptr [ESI + 0x1c]      ; 0052e019
    ADD EAX,0x7c                        ; 0052e01c
    CMP EDX,EDI                         ; 0052e01f
    JL 0x0052e008                       ; 0052e021
        ;   XREF to: 0052e008 (CONDITIONAL_JUMP)  ; LAB_0052e008
    MOV EAX,0xffffffff                  ; 0052e023
        ;   Label: LAB_0052e023
    POP EBP                             ; 0052e028
    POP EDI                             ; 0052e029
    POP ESI                             ; 0052e02a
    POP EBX                             ; 0052e02b
    RET                                 ; 0052e02c
    MOV EAX,EDX                         ; 0052e02d
        ;   Label: LAB_0052e02d
    POP EBP                             ; 0052e02f
    POP EDI                             ; 0052e030
    POP ESI                             ; 0052e031
    POP EBX                             ; 0052e032
    RET                                 ; 0052e033

