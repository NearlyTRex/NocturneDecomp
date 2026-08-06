; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00463ff5(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 at 0045f1bb
;
; Referenced Globals:
;   undefined4 DAT_005ae708
;   undefined4 DAT_01b4d764
;   undefined4 DAT_01b4d768
;   undefined4 DAT_01bd2fa0
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463ff5
        ;   Label: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00463ff5
    PUSH EDI                            ; 00463ff6
    TEST EBX,0x1                        ; 00463ff7
    JZ 0x00464002                       ; 00463ffd
        ;   XREF to: 00464002 (CONDITIONAL_JUMP)  ; LAB_00464002
    POP EDI                             ; 00463fff
    POP ESI                             ; 00464000
    RET                                 ; 00464001
    PUSH EBP                            ; 00464002
        ;   Label: LAB_00464002
    MOV EAX,dword ptr [ESI + 0x8]       ; 00464003
    MOV ECX,dword ptr [EDI + 0x8]       ; 00464006
    CMP EAX,ECX                         ; 00464009
    JBE 0x00464010                      ; 0046400b
        ;   XREF to: 00464010 (CONDITIONAL_JUMP)  ; LAB_00464010
    XCHG EAX,ECX                        ; 0046400d
    XCHG EDI,ESI                        ; 0046400e
    SHR EAX,0x10                        ; 00464010
        ;   Label: LAB_00464010
    SHR ECX,0x10                        ; 00464013
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00464016 | DAT_01bd2fa0
    SUB ECX,EAX                         ; 0046401d
    JLE 0x00464050                      ; 0046401f
        ;   XREF to: 00464050 (CONDITIONAL_JUMP)  ; LAB_00464050
    SHL EAX,0x1                         ; 00464021
    ADD EBP,EAX                         ; 00464023
    INC ECX                             ; 00464025
    MOV EAX,dword ptr [EDI + 0x28]      ; 00464026
    SUB EAX,dword ptr [ESI + 0x28]      ; 00464029
    IMUL dword ptr [ECX*0x4 + 0x1c00c80] ; 0046402c | g_ReciprocalLookupTable
    MOV EBX,EBP                         ; 00464033
    DEC ECX                             ; 00464035
    MOV ESI,dword ptr [ESI + 0x28]      ; 00464036
    MOV EAX,ESI                         ; 00464039
        ;   Label: LAB_00464039
    SHR EAX,0x8                         ; 0046403b
    MOVZX EDI,word ptr [EBX]            ; 0046403e
    CMP EAX,EDI                         ; 00464041
    JC 0x00464054                       ; 00464043
        ;   XREF to: 00464054 (CONDITIONAL_JUMP)  ; LAB_00464054
    LEA ESI,[ESI + EDX*0x2]             ; 00464045
        ;   Label: LAB_00464045
    ADD EBX,0x4                         ; 00464048
    SUB ECX,0x2                         ; 0046404b
    JG 0x00464039                       ; 0046404e
        ;   XREF to: 00464039 (CONDITIONAL_JUMP)  ; LAB_00464039
    POP EBP                             ; 00464050
        ;   Label: LAB_00464050
    POP EDI                             ; 00464051
    POP ESI                             ; 00464052
    RET                                 ; 00464053
    MOV EAX,[0x01b4d764]                ; 00464054 | DAT_01b4d764
        ;   Label: LAB_00464054
    INC EAX                             ; 00464059
    MOV [0x01b4d764],EAX                ; 0046405a | DAT_01b4d764
    CMP EAX,dword ptr [0x005ae708]      ; 0046405f | DAT_005ae708
    JC 0x00464045                       ; 00464065
        ;   XREF to: 00464045 (CONDITIONAL_JUMP)  ; LAB_00464045
    MOV dword ptr [0x01b4d768],0x1      ; 00464067 | DAT_01b4d768
    POP EBP                             ; 00464071
    POP EDI                             ; 00464072
    POP ESI                             ; 00464073
    RET                                 ; 00464074

