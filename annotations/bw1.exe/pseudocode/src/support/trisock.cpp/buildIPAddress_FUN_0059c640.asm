; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trisock_cpp_buildIPAddress_FUN_0059c640(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[3]:
;   support_trisock.cpp_FUN_0059efd0 at 0059f152
;   support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520 at 0059c53d
;   support_trisock.cpp_parseIPComponents_FUN_0059c5d0 at 0059c622
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c640
        ;   Label: support_trisock.cpp_buildIPAddress_FUN_0059c640
    PUSH ESI                            ; 0059c641
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059c642
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059c646
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059c64a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059c64e
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059c652
    TEST ESI,ESI                        ; 0059c656
    JL 0x0059c686                       ; 0059c658
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    CMP ESI,0xff                        ; 0059c65a
    JG 0x0059c686                       ; 0059c660
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    TEST EBX,EBX                        ; 0059c662
    JL 0x0059c686                       ; 0059c664
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    CMP EBX,0xff                        ; 0059c666
    JG 0x0059c686                       ; 0059c66c
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    TEST ECX,ECX                        ; 0059c66e
    JL 0x0059c686                       ; 0059c670
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    CMP ECX,0xff                        ; 0059c672
    JG 0x0059c686                       ; 0059c678
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    TEST EDX,EDX                        ; 0059c67a
    JL 0x0059c686                       ; 0059c67c
        ;   XREF to: 0059c686 (CONDITIONAL_JUMP)  ; LAB_0059c686
    CMP EDX,0xff                        ; 0059c67e
    JLE 0x0059c68b                      ; 0059c684
        ;   XREF to: 0059c68b (CONDITIONAL_JUMP)  ; LAB_0059c68b
    XOR EAX,EAX                         ; 0059c686
        ;   Label: LAB_0059c686
    POP ESI                             ; 0059c688
    POP EBX                             ; 0059c689
    RET                                 ; 0059c68a
    MOV byte ptr [EAX + 0x1],BL         ; 0059c68b
        ;   Label: LAB_0059c68b
    MOV DH,byte ptr [ESP + 0x10]        ; 0059c68e
    MOV byte ptr [EAX + 0x2],CL         ; 0059c692
    MOV byte ptr [EAX + 0x3],DL         ; 0059c695
    MOV byte ptr [EAX],DH               ; 0059c698
    MOV EAX,0x1                         ; 0059c69a
    POP ESI                             ; 0059c69f
    POP EBX                             ; 0059c6a0
    RET                                 ; 0059c6a1

