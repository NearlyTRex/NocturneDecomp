; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_CScat_ctor_FUN_0051e9a0 at 0051e9f7
;
; Referenced Globals:
;   TerminatedCString s_CBaronWeapon_005e2afd
;   TerminatedCString s_BaronProxy_005e2b0a
;   undefined4 s_aronProxy_005e2b0a+1
;   undefined4 s_ronProxy_005e2b0a+2
;   undefined4 s_onProxy_005e2b0a+3
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c5a0
;   core_inv.cpp_CInventory_initialize_FUN_004da900
;   core_inv.cpp_FUN_004dadb0
;   core_inv.cpp_FUN_004db9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ec20
        ;   Label: core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20
    PUSH ESI                            ; 0051ec21
    PUSH EDI                            ; 0051ec22
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051ec23
    ADD EBX,0x2437c                     ; 0051ec27
    PUSH EBX                            ; 0051ec2d
    CALL core_inv.cpp_CInventory_initialize_FUN_004da900 ; 0051ec2e
        ;   XREF to: 004da900 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da900(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0051ec33
    PUSH 0x5e2afd                       ; 0051ec36 | = "CBaronWeapon"
    MOV ESI,0x5e2b0a                    ; 0051ec3b | = "BaronProxy"
    CALL core_actor.cpp_createActorByName_FUN_0040c5a0 ; 0051ec40
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c5a0(char * class_name)
    ADD ESP,0x4                         ; 0051ec45
    MOV EDI,EAX                         ; 0051ec48
    MOV EDX,EAX                         ; 0051ec4a
    PUSH EDI                            ; 0051ec4c
    MOV AL,byte ptr [ESI]               ; 0051ec4d | = "BaronProxy" | s_ronProxy_005e2b0a+2
        ;   Label: LAB_0051ec4d
    MOV byte ptr [EDI],AL               ; 0051ec4f
    CMP AL,0x0                          ; 0051ec51
    JZ 0x0051ec65                       ; 0051ec53
        ;   XREF to: 0051ec65 (CONDITIONAL_JUMP)  ; LAB_0051ec65
    MOV AL,byte ptr [ESI + 0x1]         ; 0051ec55 | s_aronProxy_005e2b0a+1 | s_onProxy_005e2b0a+3
    ADD ESI,0x2                         ; 0051ec58
    MOV byte ptr [EDI + 0x1],AL         ; 0051ec5b
    ADD EDI,0x2                         ; 0051ec5e
    CMP AL,0x0                          ; 0051ec61
    JNZ 0x0051ec4d                      ; 0051ec63
        ;   XREF to: 0051ec4d (CONDITIONAL_JUMP)  ; LAB_0051ec4d
    POP EDI                             ; 0051ec65
        ;   Label: LAB_0051ec65
    PUSH 0x0                            ; 0051ec66
    PUSH 0x1                            ; 0051ec68
    PUSH EDX                            ; 0051ec6a
    PUSH EBX                            ; 0051ec6b
    CALL core_inv.cpp_FUN_004dadb0      ; 0051ec6c
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    ADD ESP,0x10                        ; 0051ec71
    PUSH 0x1                            ; 0051ec74
    PUSH 0x5                            ; 0051ec76
    PUSH 0x0                            ; 0051ec78
    PUSH EBX                            ; 0051ec7a
    CALL core_inv.cpp_FUN_004db9d0      ; 0051ec7b
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 0051ec80
    POP EDI                             ; 0051ec83
    POP ESI                             ; 0051ec84
    POP EBX                             ; 0051ec85
    RET                                 ; 0051ec86

