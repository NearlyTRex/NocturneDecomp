; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20(C3DSCamera *this_ptr,CVector3f *world_position,float radius)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   core_setdir.cpp_FUN_00538d10 at 005396fc
;   core_setdir.cpp_testCameraVisibility_FUN_00538be0 at 00538c5d
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ae20
        ;   Label: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
    PUSH ESI                            ; 0053ae21
    PUSH EDI                            ; 0053ae22
    SUB ESP,0x30                        ; 0053ae23
    MOV EBX,dword ptr [ESP + 0x40]      ; 0053ae26
    MOV ESI,dword ptr [ESP + 0x44]      ; 0053ae2a
    FLD float ptr [ESI + 0x4]           ; 0053ae2e
    FLD float ptr [ESI + 0x8]           ; 0053ae31
    FLD float ptr [ESI]                 ; 0053ae34
    LEA EAX,[EBX + 0x100]               ; 0053ae36
    LEA EDI,[ESP + 0x24]                ; 0053ae3c
    MOV ESI,ESP                         ; 0053ae40
    FSUB float ptr [EAX]                ; 0053ae42
    FXCH ST2                            ; 0053ae44
    FSUB float ptr [EAX + 0x4]          ; 0053ae46
    FXCH                                ; 0053ae49
    FSUB float ptr [EAX + 0x8]          ; 0053ae4b
    FXCH ST2                            ; 0053ae4e
    FSTP float ptr [ESP]                ; 0053ae50
    FSTP float ptr [ESP + 0x4]          ; 0053ae53
    LEA EAX,[ESP + 0x24]                ; 0053ae57
    FSTP float ptr [ESP + 0x8]          ; 0053ae5b
    PUSH EAX                            ; 0053ae5f
    LEA EAX,[EBX + 0x118]               ; 0053ae60
    MOVSD ES:EDI,ESI                    ; 0053ae66
    MOVSD ES:EDI,ESI                    ; 0053ae67
    MOVSD ES:EDI,ESI                    ; 0053ae68
    PUSH EAX                            ; 0053ae69
    LEA ESI,[ESP + 0x20]                ; 0053ae6a
    LEA EDI,[ESP + 0x14]                ; 0053ae6e
    CALL core_dirmat.cpp_FUN_004495a0   ; 0053ae72
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x20]                ; 0053ae77
    ADD ESP,0x8                         ; 0053ae7b
    MOVSD ES:EDI,ESI                    ; 0053ae7e
    MOVSD ES:EDI,ESI                    ; 0053ae7f
    MOVSD ES:EDI,ESI                    ; 0053ae80
    FLD float ptr [ESP + 0xc]           ; 0053ae81
    FADD float ptr [ESP + 0x48]         ; 0053ae85
    FCOMP float ptr [EBX + 0x17c]       ; 0053ae89
    FNSTSW AX                           ; 0053ae8f
    SAHF                                ; 0053ae91
    JC 0x0053aef3                       ; 0053ae92
        ;   XREF to: 0053aef3 (CONDITIONAL_JUMP)  ; LAB_0053aef3
    FLD float ptr [ESP + 0x10]          ; 0053ae94
    FADD float ptr [ESP + 0x48]         ; 0053ae98
    FCOMP float ptr [EBX + 0x180]       ; 0053ae9c
    FNSTSW AX                           ; 0053aea2
    SAHF                                ; 0053aea4
    JC 0x0053aef3                       ; 0053aea5
        ;   XREF to: 0053aef3 (CONDITIONAL_JUMP)  ; LAB_0053aef3
    FLD float ptr [ESP + 0x14]          ; 0053aea7
    FADD float ptr [ESP + 0x48]         ; 0053aeab
    FCOMP float ptr [EBX + 0x184]       ; 0053aeaf
    FNSTSW AX                           ; 0053aeb5
    SAHF                                ; 0053aeb7
    JC 0x0053aef3                       ; 0053aeb8
        ;   XREF to: 0053aef3 (CONDITIONAL_JUMP)  ; LAB_0053aef3
    FLD float ptr [ESP + 0xc]           ; 0053aeba
    FSUB float ptr [ESP + 0x48]         ; 0053aebe
    FCOMP float ptr [EBX + 0x188]       ; 0053aec2
    FNSTSW AX                           ; 0053aec8
    SAHF                                ; 0053aeca
    JA 0x0053aef3                       ; 0053aecb
        ;   XREF to: 0053aef3 (CONDITIONAL_JUMP)  ; LAB_0053aef3
    FLD float ptr [ESP + 0x10]          ; 0053aecd
    FSUB float ptr [ESP + 0x48]         ; 0053aed1
    FCOMP float ptr [EBX + 0x18c]       ; 0053aed5
    FNSTSW AX                           ; 0053aedb
    SAHF                                ; 0053aedd
    JA 0x0053aef3                       ; 0053aede
        ;   XREF to: 0053aef3 (CONDITIONAL_JUMP)  ; LAB_0053aef3
    FLD float ptr [ESP + 0x14]          ; 0053aee0
    FSUB float ptr [ESP + 0x48]         ; 0053aee4
    FCOMP float ptr [EBX + 0x190]       ; 0053aee8
    FNSTSW AX                           ; 0053aeee
    SAHF                                ; 0053aef0
    JBE 0x0053aefc                      ; 0053aef1
        ;   XREF to: 0053aefc (CONDITIONAL_JUMP)  ; LAB_0053aefc
    XOR EAX,EAX                         ; 0053aef3
        ;   Label: LAB_0053aef3
    ADD ESP,0x30                        ; 0053aef5
    POP EDI                             ; 0053aef8
    POP ESI                             ; 0053aef9
    POP EBX                             ; 0053aefa
    RET                                 ; 0053aefb
    MOV EAX,0x1                         ; 0053aefc
        ;   Label: LAB_0053aefc
    ADD ESP,0x30                        ; 0053af01
    POP EDI                             ; 0053af04
    POP ESI                             ; 0053af05
    POP EBX                             ; 0053af06
    RET                                 ; 0053af07

