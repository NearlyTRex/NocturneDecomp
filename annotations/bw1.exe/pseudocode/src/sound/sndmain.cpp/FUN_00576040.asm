; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00576040(float param_1)
;
;
; XREF[1]:
;   FUN_005760b0 at 00576213
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f4468
;   TerminatedCString s_setMaxSwSoundLatency_can_005f447d
;   undefined4 DAT_005f44b8
;   undefined4 DAT_005f44c0
;   undefined4 DAT_00623314
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00575550
;
; *****************************************************************************

section .text

    CALL FUN_00575550                   ; 00576040
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; undefined FUN_00575550()
        ;   Label: FUN_00576040
    TEST EAX,EAX                        ; 00576045
    JNZ 0x00576079                      ; 00576047
        ;   XREF to: 00576079 (CONDITIONAL_JUMP)  ; LAB_00576079
    FLD float ptr [ESP + 0x4]           ; 00576049
        ;   Label: LAB_00576049
    FCOMP double ptr [0x005f44b8]       ; 0057604d | DAT_005f44b8
    FNSTSW AX                           ; 00576053
    SAHF                                ; 00576055
    JNC 0x00576060                      ; 00576056
        ;   XREF to: 00576060 (CONDITIONAL_JUMP)  ; LAB_00576060
    MOV dword ptr [ESP + 0x4],0x3d4ccccd ; 00576058
    FLD float ptr [ESP + 0x4]           ; 00576060
        ;   Label: LAB_00576060
    FCOMP double ptr [0x005f44c0]       ; 00576064 | DAT_005f44c0
    FNSTSW AX                           ; 0057606a
    SAHF                                ; 0057606c
    JA 0x0057609e                       ; 0057606d
        ;   XREF to: 0057609e (CONDITIONAL_JUMP)  ; LAB_0057609e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057606f
    MOV [0x00623314],EAX                ; 00576073 | DAT_00623314
    RET                                 ; 00576078
    MOV EDX,0x5f4468                    ; 00576079 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00576079
    MOV ECX,0x186e                      ; 0057607e
    PUSH 0x5f447d                       ; 00576083 | = "setMaxSwSoundLatency - can't do this ..."
    MOV dword ptr [0x01d1d400],EDX      ; 00576088 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0057608e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00576094
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00576099
    JMP 0x00576049                      ; 0057609c
        ;   XREF to: 00576049 (UNCONDITIONAL_JUMP)  ; LAB_00576049
    MOV dword ptr [ESP + 0x4],0x40000000 ; 0057609e
        ;   Label: LAB_0057609e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005760a6
    MOV [0x00623314],EAX                ; 005760aa | DAT_00623314
    RET                                 ; 005760af

