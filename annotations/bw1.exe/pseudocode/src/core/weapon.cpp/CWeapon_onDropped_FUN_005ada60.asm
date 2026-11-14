; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_005ada60(CWeapon *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;   core_weapon.cpp_FUN_005ade40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ada60
        ;   Label: core_weapon.cpp_CWeapon_onDropped_FUN_005ada60
    PUSH ESI                            ; 005ada61
    PUSH EDI                            ; 005ada62
    PUSH EBP                            ; 005ada63
    SUB ESP,0x18                        ; 005ada64
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005ada67
    MOV EBP,dword ptr [ESP + 0x30]      ; 005ada6b
    PUSH EBX                            ; 005ada6f
    MOV dword ptr [EBX + 0x304],0x0     ; 005ada70
    CALL core_weapon.cpp_FUN_005ade40   ; 005ada7a
        ;   XREF to: 005ade40 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_005ade40()
    ADD ESP,0x4                         ; 005ada7f
    TEST EBP,EBP                        ; 005ada82
    JNZ 0x005adaaa                      ; 005ada84
        ;   XREF to: 005adaaa (CONDITIONAL_JUMP)  ; LAB_005adaaa
    PUSH 0x0                            ; 005ada86
        ;   Label: LAB_005ada86
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ada88
    PUSH EBX                            ; 005ada8e
    CALL dword ptr [EAX + 0xdc]         ; 005ada8f
    ADD ESP,0x8                         ; 005ada95
    MOV dword ptr [EBX + 0x570],0x40a00000 ; 005ada98
    ADD ESP,0x18                        ; 005adaa2
    POP EBP                             ; 005adaa5
    POP EDI                             ; 005adaa6
    POP ESI                             ; 005adaa7
    POP EBX                             ; 005adaa8
    RET                                 ; 005adaa9
    PUSH EBP                            ; 005adaaa
        ;   Label: LAB_005adaaa
    LEA EAX,[EBX + 0x320]               ; 005adaab
    PUSH EAX                            ; 005adab1
    LEA ESI,[ESP + 0x14]                ; 005adab2
    LEA EDI,[ESP + 0x8]                 ; 005adab6
    CALL core_dirmat.cpp_FUN_0045f700   ; 005adaba
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x14]                ; 005adabf
    LEA EAX,[ESP + 0x8]                 ; 005adac3
    ADD ESP,0x8                         ; 005adac7
    LEA EDX,[EBX + 0x354]               ; 005adaca
    MOVSD ES:EDI,ESI                    ; 005adad0
    MOVSD ES:EDI,ESI                    ; 005adad1
    MOVSD ES:EDI,ESI                    ; 005adad2
    CMP EDX,EAX                         ; 005adad3
    JZ 0x005adaea                       ; 005adad5
        ;   XREF to: 005adaea (CONDITIONAL_JUMP)  ; LAB_005adaea
    MOV EAX,dword ptr [ESP]             ; 005adad7
    MOV dword ptr [EDX],EAX             ; 005adada
    MOV EAX,dword ptr [ESP + 0x4]       ; 005adadc
    MOV dword ptr [EDX + 0x4],EAX       ; 005adae0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005adae3
    MOV dword ptr [EDX + 0x8],EAX       ; 005adae7
    LEA EAX,[EBX + 0x348]               ; 005adaea
        ;   Label: LAB_005adaea
    CMP EAX,EBP                         ; 005adaf0
    JZ 0x005ada86                       ; 005adaf2
        ;   XREF to: 005ada86 (CONDITIONAL_JUMP)  ; LAB_005ada86
    MOV EDX,dword ptr [EBP]             ; 005adaf4
    MOV dword ptr [EAX],EDX             ; 005adaf7
    MOV EDX,dword ptr [EBP + 0x4]       ; 005adaf9
    MOV dword ptr [EAX + 0x4],EDX       ; 005adafc
    MOV EDX,dword ptr [EBP + 0x8]       ; 005adaff
    MOV dword ptr [EAX + 0x8],EDX       ; 005adb02
    JMP 0x005ada86                      ; 005adb05
        ;   XREF to: 005ada86 (UNCONDITIONAL_JUMP)  ; LAB_005ada86

