; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_door_cpp_FUN_00460800(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_getMoveType_FUN_00460630 at 004606e9
;   core_hero.cpp_FUN_004cf230 at 004cf291
;
; Referenced Globals:
;   undefined4 DAT_01b4d330
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460800
        ;   Label: core_door.cpp_FUN_00460800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460801
    MOV EDX,dword ptr [0x01b4d330]      ; 00460805 | DAT_01b4d330
    PUSH EDX                            ; 0046080b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0046080c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00460811
    TEST EAX,EAX                        ; 00460814
    JZ 0x0046081a                       ; 00460816
        ;   XREF to: 0046081a (CONDITIONAL_JUMP)  ; LAB_0046081a
    POP EBX                             ; 00460818
    RET                                 ; 00460819
    LEA EDX,[EBX + 0xa88]               ; 0046081a
        ;   Label: LAB_0046081a
    PUSH EDX                            ; 00460820
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00460821
    PUSH EBX                            ; 00460827
    CALL dword ptr [EAX + 0x34]         ; 00460828
    ADD ESP,0x8                         ; 0046082b
    MOV [0x01b4d330],EAX                ; 0046082e | DAT_01b4d330
    POP EBX                             ; 00460833
    RET                                 ; 00460834

