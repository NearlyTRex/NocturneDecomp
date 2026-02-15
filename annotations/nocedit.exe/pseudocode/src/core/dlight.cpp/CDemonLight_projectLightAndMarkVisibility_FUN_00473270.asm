; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   projected_coord
; uchar            Stack[0xc]:1   x_round_flag
; uchar            Stack[0x10]:1   y_round_flag
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 at 0044e29e
;
; Referenced Globals:
;   uchar[8] g_LightBitMaskLookup
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473270
        ;   Label: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
    PUSH ESI                            ; 00473271
    PUSH EDI                            ; 00473272
    PUSH EBP                            ; 00473273
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473274
    MOV ESI,dword ptr [ESP + 0x18]      ; 00473278
    MOV CL,byte ptr [ESP + 0x1c]        ; 0047327c
    XOR EDX,EDX                         ; 00473280
    XOR EAX,EAX                         ; 00473282
    TEST CL,0x1                         ; 00473284
    JZ 0x00473290                       ; 00473287
        ;   XREF to: 00473290 (CONDITIONAL_JUMP)  ; LAB_00473290
    MOV EAX,0x4000                      ; 00473289
    MOV EDX,EAX                         ; 0047328e
    TEST byte ptr [ESP + 0x20],0x1      ; 00473290
        ;   Label: LAB_00473290
    JZ 0x0047329d                       ; 00473295
        ;   XREF to: 0047329d (CONDITIONAL_JUMP)  ; LAB_0047329d
    OR DH,0x80                          ; 00473297
    OR AH,0x80                          ; 0047329a
    CMP dword ptr [ESI + 0x8],0x0       ; 0047329d
        ;   Label: LAB_0047329d
    JLE 0x004732e4                      ; 004732a1
        ;   XREF to: 004732e4 (CONDITIONAL_JUMP)  ; LAB_004732e4
    MOV EDI,dword ptr [ESI]             ; 004732a3
    MOV EBP,dword ptr [ESI + 0x4]       ; 004732a5
    LEA ECX,[EAX + EDI*0x1]             ; 004732a8
    LEA ESI,[EDX + EBP*0x1]             ; 004732ab
    SAR ECX,0x10                        ; 004732ae
    MOV EAX,dword ptr [EBX + 0x1cb8]    ; 004732b1
    SAR ESI,0x10                        ; 004732b7
    TEST EAX,EAX                        ; 004732ba
    JZ 0x004732eb                       ; 004732bc
        ;   XREF to: 004732eb (CONDITIONAL_JUMP)  ; LAB_004732eb
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 004732be
    MOV EDX,EAX                         ; 004732c4
    SAR EDX,0x1f                        ; 004732c6
    SUB EAX,EDX                         ; 004732c9
    SAR EAX,0x1                         ; 004732cb
    MOV EDI,ECX                         ; 004732cd
    SUB EDI,EAX                         ; 004732cf
    IMUL EDI,EDI                        ; 004732d1
    MOV EDX,ESI                         ; 004732d4
    SUB EDX,EAX                         ; 004732d6
    IMUL EDX,EDX                        ; 004732d8
    IMUL EAX,EAX                        ; 004732db
    ADD EDX,EDI                         ; 004732de
    CMP EDX,EAX                         ; 004732e0
    JLE 0x00473303                      ; 004732e2
        ;   XREF to: 00473303 (CONDITIONAL_JUMP)  ; LAB_00473303
    XOR EAX,EAX                         ; 004732e4
        ;   Label: LAB_004732e4
    POP EBP                             ; 004732e6
        ;   Label: LAB_004732e6
    POP EDI                             ; 004732e7
    POP ESI                             ; 004732e8
    POP EBX                             ; 004732e9
    RET                                 ; 004732ea
    TEST ECX,ECX                        ; 004732eb
        ;   Label: LAB_004732eb
    JL 0x004732e6                       ; 004732ed
        ;   XREF to: 004732e6 (CONDITIONAL_JUMP)  ; LAB_004732e6
    CMP ECX,dword ptr [EBX + 0x1cc0]    ; 004732ef
    JGE 0x004732e6                      ; 004732f5
        ;   XREF to: 004732e6 (CONDITIONAL_JUMP)  ; LAB_004732e6
    TEST ESI,ESI                        ; 004732f7
    JL 0x004732e6                       ; 004732f9
        ;   XREF to: 004732e6 (CONDITIONAL_JUMP)  ; LAB_004732e6
    CMP ESI,dword ptr [EBX + 0x1cc4]    ; 004732fb
    JGE 0x004732e6                      ; 00473301
        ;   XREF to: 004732e6 (CONDITIONAL_JUMP)  ; LAB_004732e6
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 00473303
        ;   Label: LAB_00473303
    IMUL EDX,ESI                        ; 00473309
    MOV EAX,EDX                         ; 0047330c
    SAR EDX,0x1f                        ; 0047330e
    SHL EDX,0x3                         ; 00473311
    SBB EAX,EDX                         ; 00473314
    SAR EAX,0x3                         ; 00473316
    MOV EDI,EAX                         ; 00473319
    MOV EDX,ECX                         ; 0047331b
    MOV EAX,ECX                         ; 0047331d
    SAR EDX,0x1f                        ; 0047331f
    SHL EDX,0x3                         ; 00473322
    SBB EAX,EDX                         ; 00473325
    SAR EAX,0x3                         ; 00473327
    ADD EDI,EAX                         ; 0047332a
    MOV EAX,dword ptr [EBX + 0x2fa0]    ; 0047332c
    ADD EAX,EDI                         ; 00473332
    MOV EDI,ECX                         ; 00473334
    AND EDI,0x7                         ; 00473336
    MOV DL,byte ptr [EDI + 0x66fed0]    ; 00473339 | g_LightBitMaskLookup
    OR byte ptr [EAX],DL                ; 0047333f
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 00473341
    ADD ECX,ESI                         ; 00473348
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0047334a
    ADD ECX,ECX                         ; 00473350
    ADD EAX,ECX                         ; 00473352
    POP EBP                             ; 00473354
    POP EDI                             ; 00473355
    POP ESI                             ; 00473356
    POP EBX                             ; 00473357
    RET                                 ; 00473358

