; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411b7b
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 004227d4
;   core_chain.cpp_FUN_00431120 at 00431178
;   core_dest.cpp_FUN_0046fe80 at 0046feaa
;   core_emitter.cpp_FUN_004a8db0 at 004a8fcf
;   core_filmreel.cpp_CFilmReel_FUN_004bee30 at 004bee5a
;   core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0 at 004e5b86
;   core_hostage.cpp_FUN_004f69c0 at 004f6a08
;   core_ladder.cpp_CLadder_FUN_00502ca0 at 00502cde
;   core_lever.cpp_FUN_00505240 at 00505305
;   ... and 10 more
;
; Referenced Globals:
;   undefined1 DAT_00614464
;   TerminatedCString s_s_d_00614465
;   undefined4 s_s_%d_00614466
;   undefined4 s_%d_00614467
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e350
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e350
    PUSH ESI                            ; 0040e351
    PUSH EDI                            ; 0040e352
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040e353
    MOV EDX,dword ptr [ESP + 0x24]      ; 0040e357
    PUSH EDX                            ; 0040e35b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0040e35c
    PUSH ECX                            ; 0040e360
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040e361
    PUSH EBX                            ; 0040e365
    PUSH 0x5                            ; 0040e366
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040e368
    PUSH EDI                            ; 0040e36c
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e36d
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
    MOV EDX,EAX                         ; 0040e372
    ADD ESP,0x14                        ; 0040e374
    TEST ESI,ESI                        ; 0040e377
    JNZ 0x0040e380                      ; 0040e379
        ;   XREF to: 0040e380 (CONDITIONAL_JUMP)  ; LAB_0040e380
    MOV ESI,0x614464                    ; 0040e37b | DAT_00614464
    LEA EDI,[EDX + 0x84]                ; 0040e380
        ;   Label: LAB_0040e380
    PUSH EDI                            ; 0040e386
    MOV AL,byte ptr [ESI]               ; 0040e387 | DAT_00614464 | s_s_%d_00614466
        ;   Label: LAB_0040e387
    MOV byte ptr [EDI],AL               ; 0040e389
    CMP AL,0x0                          ; 0040e38b
    JZ 0x0040e39f                       ; 0040e38d
        ;   XREF to: 0040e39f (CONDITIONAL_JUMP)  ; LAB_0040e39f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e38f | = "%s %d" | s_%d_00614467
    ADD ESI,0x2                         ; 0040e392
    MOV byte ptr [EDI + 0x1],AL         ; 0040e395
    ADD EDI,0x2                         ; 0040e398
    CMP AL,0x0                          ; 0040e39b
    JNZ 0x0040e387                      ; 0040e39d
        ;   XREF to: 0040e387 (CONDITIONAL_JUMP)  ; LAB_0040e387
    POP EDI                             ; 0040e39f
        ;   Label: LAB_0040e39f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e3a0
    MOV EAX,EDX                         ; 0040e3a4
    MOV dword ptr [EDX + 0x5c],ESI      ; 0040e3a6
    POP EDI                             ; 0040e3a9
    POP ESI                             ; 0040e3aa
    POP EBX                             ; 0040e3ab
    RET                                 ; 0040e3ac

