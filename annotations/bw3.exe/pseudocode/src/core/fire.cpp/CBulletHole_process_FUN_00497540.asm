; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_process_FUN_00497540(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004a1760 at 004a1939
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497540
        ;   Label: core_fire.cpp_CBulletHole_process_FUN_00497540
    PUSH ESI                            ; 00497541
    PUSH EDI                            ; 00497542
    SUB ESP,0x18                        ; 00497543
    MOV EBX,dword ptr [ESP + 0x28]      ; 00497546
    MOV EDX,dword ptr [EBX + 0x10]      ; 0049754a
    TEST EDX,EDX                        ; 0049754d
    JNZ 0x00497558                      ; 0049754f
        ;   XREF to: 00497558 (CONDITIONAL_JUMP)  ; LAB_00497558
    ADD ESP,0x18                        ; 00497551
        ;   Label: LAB_00497551
    POP EDI                             ; 00497554
    POP ESI                             ; 00497555
    POP EBX                             ; 00497556
    RET                                 ; 00497557
    LEA EAX,[EBX + 0x24]                ; 00497558
        ;   Label: LAB_00497558
    PUSH EAX                            ; 0049755b
    PUSH EDX                            ; 0049755c
    LEA ESI,[ESP + 0x8]                 ; 0049755d
    LEA EDI,[ESP + 0x14]                ; 00497561
    CALL core_actor.cpp_FUN_00408b80    ; 00497565
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x8]                 ; 0049756a
    ADD ESP,0x8                         ; 0049756e
    LEA EAX,[ESP + 0xc]                 ; 00497571
    MOVSD ES:EDI,ESI                    ; 00497575
    MOVSD ES:EDI,ESI                    ; 00497576
    MOVSD ES:EDI,ESI                    ; 00497577
    CMP EBX,EAX                         ; 00497578
    JZ 0x00497551                       ; 0049757a
        ;   XREF to: 00497551 (CONDITIONAL_JUMP)  ; LAB_00497551
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049757c
    MOV dword ptr [EBX],EAX             ; 00497580
    MOV EAX,dword ptr [ESP + 0x10]      ; 00497582
    MOV dword ptr [EBX + 0x4],EAX       ; 00497586
    MOV EAX,dword ptr [ESP + 0x14]      ; 00497589
    MOV dword ptr [EBX + 0x8],EAX       ; 0049758d
    ADD ESP,0x18                        ; 00497590
    POP EDI                             ; 00497593
    POP ESI                             ; 00497594
    POP EBX                             ; 00497595
    RET                                 ; 00497596

