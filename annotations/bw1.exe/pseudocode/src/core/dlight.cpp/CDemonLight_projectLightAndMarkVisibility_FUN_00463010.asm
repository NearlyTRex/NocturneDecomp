; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00463010(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   projected_coord
; uchar            Stack[0xc]:1   x_round_flag
; uchar            Stack[0x10]:1   y_round_flag
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0 at 0044ed6e
;
; Referenced Globals:
;   undefined4 DAT_006122a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463010
        ;   Label: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00463010
    PUSH ESI                            ; 00463011
    PUSH EDI                            ; 00463012
    PUSH EBP                            ; 00463013
    MOV EBX,dword ptr [ESP + 0x14]      ; 00463014
    MOV ESI,dword ptr [ESP + 0x18]      ; 00463018
    MOV CL,byte ptr [ESP + 0x1c]        ; 0046301c
    XOR EDX,EDX                         ; 00463020
    XOR EAX,EAX                         ; 00463022
    TEST CL,0x1                         ; 00463024
    JZ 0x00463030                       ; 00463027
        ;   XREF to: 00463030 (CONDITIONAL_JUMP)  ; LAB_00463030
    MOV EAX,0x4000                      ; 00463029
    MOV EDX,EAX                         ; 0046302e
    TEST byte ptr [ESP + 0x20],0x1      ; 00463030
        ;   Label: LAB_00463030
    JZ 0x0046303d                       ; 00463035
        ;   XREF to: 0046303d (CONDITIONAL_JUMP)  ; LAB_0046303d
    OR DH,0x80                          ; 00463037
    OR AH,0x80                          ; 0046303a
    CMP dword ptr [ESI + 0x8],0x0       ; 0046303d
        ;   Label: LAB_0046303d
    JLE 0x00463084                      ; 00463041
        ;   XREF to: 00463084 (CONDITIONAL_JUMP)  ; LAB_00463084
    MOV EDI,dword ptr [ESI]             ; 00463043
    MOV EBP,dword ptr [ESI + 0x4]       ; 00463045
    LEA ECX,[EAX + EDI*0x1]             ; 00463048
    LEA ESI,[EDX + EBP*0x1]             ; 0046304b
    SAR ECX,0x10                        ; 0046304e
    MOV EAX,dword ptr [EBX + 0x1cb8]    ; 00463051
    SAR ESI,0x10                        ; 00463057
    TEST EAX,EAX                        ; 0046305a
    JZ 0x0046308b                       ; 0046305c
        ;   XREF to: 0046308b (CONDITIONAL_JUMP)  ; LAB_0046308b
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0046305e
    MOV EDX,EAX                         ; 00463064
    SAR EDX,0x1f                        ; 00463066
    SUB EAX,EDX                         ; 00463069
    SAR EAX,0x1                         ; 0046306b
    MOV EDI,ECX                         ; 0046306d
    SUB EDI,EAX                         ; 0046306f
    IMUL EDI,EDI                        ; 00463071
    MOV EDX,ESI                         ; 00463074
    SUB EDX,EAX                         ; 00463076
    IMUL EDX,EDX                        ; 00463078
    IMUL EAX,EAX                        ; 0046307b
    ADD EDX,EDI                         ; 0046307e
    CMP EDX,EAX                         ; 00463080
    JLE 0x004630a3                      ; 00463082
        ;   XREF to: 004630a3 (CONDITIONAL_JUMP)  ; LAB_004630a3
    XOR EAX,EAX                         ; 00463084
        ;   Label: LAB_00463084
    POP EBP                             ; 00463086
        ;   Label: LAB_00463086
    POP EDI                             ; 00463087
    POP ESI                             ; 00463088
    POP EBX                             ; 00463089
    RET                                 ; 0046308a
    TEST ECX,ECX                        ; 0046308b
        ;   Label: LAB_0046308b
    JL 0x00463086                       ; 0046308d
        ;   XREF to: 00463086 (CONDITIONAL_JUMP)  ; LAB_00463086
    CMP ECX,dword ptr [EBX + 0x1cc0]    ; 0046308f
    JGE 0x00463086                      ; 00463095
        ;   XREF to: 00463086 (CONDITIONAL_JUMP)  ; LAB_00463086
    TEST ESI,ESI                        ; 00463097
    JL 0x00463086                       ; 00463099
        ;   XREF to: 00463086 (CONDITIONAL_JUMP)  ; LAB_00463086
    CMP ESI,dword ptr [EBX + 0x1cc4]    ; 0046309b
    JGE 0x00463086                      ; 004630a1
        ;   XREF to: 00463086 (CONDITIONAL_JUMP)  ; LAB_00463086
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 004630a3
        ;   Label: LAB_004630a3
    IMUL EDX,ESI                        ; 004630a9
    MOV EAX,EDX                         ; 004630ac
    SAR EDX,0x1f                        ; 004630ae
    SHL EDX,0x3                         ; 004630b1
    SBB EAX,EDX                         ; 004630b4
    SAR EAX,0x3                         ; 004630b6
    MOV EDI,EAX                         ; 004630b9
    MOV EDX,ECX                         ; 004630bb
    MOV EAX,ECX                         ; 004630bd
    SAR EDX,0x1f                        ; 004630bf
    SHL EDX,0x3                         ; 004630c2
    SBB EAX,EDX                         ; 004630c5
    SAR EAX,0x3                         ; 004630c7
    ADD EDI,EAX                         ; 004630ca
    MOV EAX,dword ptr [EBX + 0x2fa0]    ; 004630cc
    ADD EAX,EDI                         ; 004630d2
    MOV EDI,ECX                         ; 004630d4
    AND EDI,0x7                         ; 004630d6
    MOV DL,byte ptr [EDI + 0x6122a0]    ; 004630d9 | DAT_006122a0
    OR byte ptr [EAX],DL                ; 004630df
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 004630e1
    ADD ECX,ESI                         ; 004630e8
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 004630ea
    ADD ECX,ECX                         ; 004630f0
    ADD EAX,ECX                         ; 004630f2
    POP EBP                             ; 004630f4
    POP EDI                             ; 004630f5
    POP ESI                             ; 004630f6
    POP EBX                             ; 004630f7
    RET                                 ; 004630f8

