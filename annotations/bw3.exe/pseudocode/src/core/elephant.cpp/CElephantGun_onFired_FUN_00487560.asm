; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_00487560(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005bd9c4
;   TerminatedCString s_sh_cock_wav_005bd9ce
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_loadModel_FUN_00462420
;   core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487560
        ;   Label: core_elephant.cpp_CElephantGun_onFired_FUN_00487560
    PUSH ESI                            ; 00487561
    PUSH EDI                            ; 00487562
    PUSH EBP                            ; 00487563
    SUB ESP,0x74                        ; 00487564
    MOV EBX,dword ptr [ESP + 0x88]      ; 00487567
    PUSH 0x3ec90fdb                     ; 0048756e
    MOV EDX,0x40a00000                  ; 00487573
    MOV ECX,0x40c00000                  ; 00487578
    MOV ESI,0xc0c00000                  ; 0048757d
    PUSH 0xbec90fdb                     ; 00487582
    MOV dword ptr [ESP + 0x3c],EDX      ; 00487587
    MOV dword ptr [ESP + 0x40],ECX      ; 0048758b
    MOV dword ptr [ESP + 0x44],ESI      ; 0048758f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00487593
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 00487598
    FLD float ptr [ESP + 0x78]          ; 0048759c
    ADD ESP,0x8                         ; 004875a0
    PUSH 0x3ec90fdb                     ; 004875a3
    PUSH 0xbec90fdb                     ; 004875a8
    FSTP float ptr [ESP + 0x48]         ; 004875ad
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004875b1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004875b6
    FLD float ptr [ESP + 0x78]          ; 004875ba
    ADD ESP,0x8                         ; 004875be
    LEA EAX,[ESP + 0x40]                ; 004875c1
    PUSH EAX                            ; 004875c5
    LEA EAX,[ESP + 0x4]                 ; 004875c6
    XOR EDI,EDI                         ; 004875ca
    PUSH EAX                            ; 004875cc
    FSTP float ptr [ESP + 0x4c]         ; 004875cd
    MOV dword ptr [ESP + 0x50],EDI      ; 004875d1
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004875d5
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004875da
    LEA EAX,[ESP + 0x34]                ; 004875dd
    PUSH EAX                            ; 004875e1
    LEA EAX,[ESP + 0x4]                 ; 004875e2
    PUSH EAX                            ; 004875e6
    LEA ESI,[ESP + 0x30]                ; 004875e7
    LEA EDI,[ESP + 0x6c]                ; 004875eb
    CALL core_dirmat.cpp_FUN_0045b800   ; 004875ef
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 004875f4
    LEA EAX,[ESP + 0x64]                ; 004875f7
    LEA ESI,[ESP + 0x28]                ; 004875fb
    PUSH EAX                            ; 004875ff
    MOVSD ES:EDI,ESI                    ; 00487600
    MOVSD ES:EDI,ESI                    ; 00487601
    MOVSD ES:EDI,ESI                    ; 00487602
    PUSH EBX                            ; 00487603
    LEA ESI,[ESP + 0x54]                ; 00487604
    LEA EDI,[ESP + 0x60]                ; 00487608
    CALL core_actor.cpp_FUN_00408b00    ; 0048760c
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x54]                ; 00487611
    ADD ESP,0x8                         ; 00487615
    MOVSD ES:EDI,ESI                    ; 00487618
    MOVSD ES:EDI,ESI                    ; 00487619
    MOVSD ES:EDI,ESI                    ; 0048761a
    LEA EAX,[ESP + 0x58]                ; 0048761b
    LEA ESI,[ESP + 0x34]                ; 0048761f
    CMP ESI,EAX                         ; 00487623
    JZ 0x0048763f                       ; 00487625
        ;   XREF to: 0048763f (CONDITIONAL_JUMP)  ; LAB_0048763f
    MOV EAX,dword ptr [ESP + 0x58]      ; 00487627
    MOV dword ptr [ESP + 0x34],EAX      ; 0048762b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0048762f
    MOV dword ptr [ESP + 0x38],EAX      ; 00487633
    MOV EAX,dword ptr [ESP + 0x60]      ; 00487637
    MOV dword ptr [ESP + 0x3c],EAX      ; 0048763b
    PUSH 0x5bd9c4                       ; 0048763f | = "shell.kfm"
        ;   Label: LAB_0048763f
    CALL core_dmodel.cpp_loadModel_FUN_00462420 ; 00487644
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00462420(char * filename)
    ADD ESP,0x4                         ; 00487649
    PUSH EAX                            ; 0048764c
    LEA EAX,[ESP + 0x38]                ; 0048764d
    PUSH EAX                            ; 00487651
    LEA EAX,[EBX + 0x30]                ; 00487652
    PUSH EAX                            ; 00487655
    LEA EAX,[EBX + 0x20]                ; 00487656
    PUSH EAX                            ; 00487659
    MOV EBP,dword ptr [0x005fc5a0]      ; 0048765a | DAT_005fc5a0
    PUSH EBP                            ; 00487660
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004a3e70 ; 00487661
        ;   XREF to: 004a3e70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 00487666
    PUSH 0x5bd9ce                       ; 00487669 | = "sh-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048766e
    PUSH EBX                            ; 00487674
    CALL dword ptr [EAX + 0x2c]         ; 00487675
    ADD ESP,0x8                         ; 00487678
    ADD ESP,0x74                        ; 0048767b
    POP EBP                             ; 0048767e
    POP EDI                             ; 0048767f
    POP ESI                             ; 00487680
    POP EBX                             ; 00487681
    RET                                 ; 00487682

