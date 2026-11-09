; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_FUN_004f91d0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_005c923c
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_charactr.cpp_FUN_00430d60
;   core_moocow.cpp_FUN_004f9050
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_sound.cpp_FUN_00560af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f91d0
        ;   Label: core_moocow.cpp_FUN_004f91d0
    PUSH ESI                            ; 004f91d1
    PUSH EDI                            ; 004f91d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f91d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f91d7
    PUSH EDI                            ; 004f91db
    PUSH EBX                            ; 004f91dc
    CALL core_moocow.cpp_FUN_004f9050   ; 004f91dd
        ;   XREF to: 004f9050 (UNCONDITIONAL_CALL)  ; undefined core_moocow.cpp_FUN_004f9050()
    FLD float ptr [EDI + 0x4]           ; 004f91e2
    FSUBR float ptr [EBX + 0x2538]      ; 004f91e5
    ADD ESP,0x8                         ; 004f91eb
    FST float ptr [EBX + 0x2538]        ; 004f91ee
    FLDZ                                ; 004f91f4
    FCOMPP                              ; 004f91f6
    FNSTSW AX                           ; 004f91f8
    SAHF                                ; 004f91fa
    JC 0x004f9247                       ; 004f91fb
        ;   XREF to: 004f9247 (CONDITIONAL_JUMP)  ; LAB_004f9247
    LEA ESI,[EBX + 0x158]               ; 004f91fd
    PUSH ESI                            ; 004f9203
    MOV dword ptr [EBX + 0x2538],0x0    ; 004f9204
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004f920e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f9213
    ADD ESP,0x4                         ; 004f9216
    CMP EAX,0x7                         ; 004f9219
    JZ 0x004f9247                       ; 004f921c
        ;   XREF to: 004f9247 (CONDITIONAL_JUMP)  ; LAB_004f9247
    CMP EAX,0x6                         ; 004f921e
    JZ 0x004f9247                       ; 004f9221
        ;   XREF to: 004f9247 (CONDITIONAL_JUMP)  ; LAB_004f9247
    PUSH 0x1                            ; 004f9223
    PUSH 0x6                            ; 004f9225
    PUSH ESI                            ; 004f9227
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004f9228
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f922d
    PUSH 0x41c80000                     ; 004f9230
    PUSH 0x32                           ; 004f9235
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f9237
    PUSH EBX                            ; 004f923d
    CALL dword ptr [EAX + 0xa8]         ; 004f923e
    ADD ESP,0xc                         ; 004f9244
    MOV EDX,dword ptr [EBX + 0xcdd4]    ; 004f9247
        ;   Label: LAB_004f9247
    PUSH EDX                            ; 004f924d
    MOV ECX,dword ptr [0x006045f8]      ; 004f924e | DAT_006045f8
    PUSH ECX                            ; 004f9254
    CALL core_sound.cpp_FUN_00560af0    ; 004f9255
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f925a
    TEST EAX,EAX                        ; 004f925d
    JZ 0x004f926f                       ; 004f925f
        ;   XREF to: 004f926f (CONDITIONAL_JUMP)  ; LAB_004f926f
    PUSH EDI                            ; 004f9261
    PUSH EBX                            ; 004f9262
    CALL core_charactr.cpp_FUN_00430d60 ; 004f9263
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430d60()
    ADD ESP,0x8                         ; 004f9268
    POP EDI                             ; 004f926b
    POP ESI                             ; 004f926c
    POP EBX                             ; 004f926d
    RET                                 ; 004f926e
    PUSH 0x5c923c                       ; 004f926f | = "cow?.wav"
        ;   Label: LAB_004f926f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f9274
    PUSH EBX                            ; 004f927a
    CALL dword ptr [EAX + 0x2c]         ; 004f927b
    ADD ESP,0x8                         ; 004f927e
    MOV dword ptr [EBX + 0xcdd4],EAX    ; 004f9281
    PUSH EDI                            ; 004f9287
    PUSH EBX                            ; 004f9288
    CALL core_charactr.cpp_FUN_00430d60 ; 004f9289
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430d60()
    ADD ESP,0x8                         ; 004f928e
    POP EDI                             ; 004f9291
    POP ESI                             ; 004f9292
    POP EBX                             ; 004f9293
    RET                                 ; 004f9294

