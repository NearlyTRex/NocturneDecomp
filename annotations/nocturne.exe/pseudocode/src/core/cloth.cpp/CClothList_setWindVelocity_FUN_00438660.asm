; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_00438660(CClothList *this_ptr,CVector3f *wind_velocity)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   wind_velocity
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438660
        ;   Label: core_cloth.cpp_CClothList_setWindVelocity_FUN_00438660
    PUSH ESI                            ; 00438661
    PUSH EDI                            ; 00438662
    MOV ESI,dword ptr [ESP + 0x10]      ; 00438663
    MOV EDX,dword ptr [ESP + 0x14]      ; 00438667
    MOV ECX,dword ptr [ESI]             ; 0043866b
    XOR EBX,EBX                         ; 0043866d
    TEST ECX,ECX                        ; 0043866f
    JLE 0x0043868e                      ; 00438671
        ;   XREF to: 0043868e (CONDITIONAL_JUMP)  ; LAB_0043868e
    MOV ECX,ESI                         ; 00438673
    MOV EAX,dword ptr [ECX + 0x194]     ; 00438675
        ;   Label: LAB_00438675
    ADD EAX,0x3ab24                     ; 0043867b
    CMP EAX,EDX                         ; 00438680
    JNZ 0x00438692                      ; 00438682
        ;   XREF to: 00438692 (CONDITIONAL_JUMP)  ; LAB_00438692
    INC EBX                             ; 00438684
    MOV EDI,dword ptr [ESI]             ; 00438685
    ADD ECX,0x4                         ; 00438687
    CMP EBX,EDI                         ; 0043868a
    JL 0x00438675                       ; 0043868c
        ;   XREF to: 00438675 (CONDITIONAL_JUMP)  ; LAB_00438675
    POP EDI                             ; 0043868e
        ;   Label: LAB_0043868e
    POP ESI                             ; 0043868f
    POP EBX                             ; 00438690
    RET                                 ; 00438691
    MOV EDI,dword ptr [EDX]             ; 00438692
        ;   Label: LAB_00438692
    MOV dword ptr [EAX],EDI             ; 00438694
    MOV EDI,dword ptr [EDX + 0x4]       ; 00438696
    MOV dword ptr [EAX + 0x4],EDI       ; 00438699
    MOV EDI,dword ptr [EDX + 0x8]       ; 0043869c
    MOV dword ptr [EAX + 0x8],EDI       ; 0043869f
    INC EBX                             ; 004386a2
    MOV EDI,dword ptr [ESI]             ; 004386a3
    ADD ECX,0x4                         ; 004386a5
    CMP EBX,EDI                         ; 004386a8
    JL 0x00438675                       ; 004386aa
        ;   XREF to: 00438675 (CONDITIONAL_JUMP)  ; LAB_00438675
    POP EDI                             ; 004386ac
    POP ESI                             ; 004386ad
    POP EBX                             ; 004386ae
    RET                                 ; 004386af

