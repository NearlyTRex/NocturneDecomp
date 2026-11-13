; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 004260b2
;   core_charactr.cpp_FUN_00432330 at 004329df
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 0045539c
;   core_prye.cpp_FUN_00522b00 at 005233bc
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 00560683
;   core_sound.cpp_FUN_0055f6b0 at 0055f775
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 005891fe
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00474400
;   core_setcolid.cpp_FUN_0053d270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cbf0
        ;   Label: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
    PUSH ESI                            ; 0053cbf1
    PUSH EDI                            ; 0053cbf2
    PUSH EBP                            ; 0053cbf3
    MOV EBP,ESP                         ; 0053cbf4
    SUB ESP,0xc                         ; 0053cbf6
    AND ESP,0xfffffff8                  ; 0053cbf9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0053cbfc
    PUSH EDX                            ; 0053cbff
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053cc00
    PUSH ECX                            ; 0053cc03
    PUSH 0x203b37c                      ; 0053cc04 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00474400   ; 0053cc09
        ;   XREF to: 00474400 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_FUN_00474400(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0053cc0e
    TEST EAX,EAX                        ; 0053cc11
    JZ 0x0053cc21                       ; 0053cc13
        ;   XREF to: 0053cc21 (CONDITIONAL_JUMP)  ; LAB_0053cc21
    MOV EAX,0x1                         ; 0053cc15
        ;   Label: LAB_0053cc15
    MOV ESP,EBP                         ; 0053cc1a
    POP EBP                             ; 0053cc1c
    POP EDI                             ; 0053cc1d
    POP ESI                             ; 0053cc1e
    POP EBX                             ; 0053cc1f
    RET                                 ; 0053cc20
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0053cc21
        ;   Label: LAB_0053cc21
    PUSH 0x3f8147ae                     ; 0053cc24
    PUSH EBX                            ; 0053cc29
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053cc2a
    PUSH ESI                            ; 0053cc2d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053cc2e
    PUSH 0xbf800000                     ; 0053cc31
    PUSH EDI                            ; 0053cc36
    CALL core_setcolid.cpp_FUN_0053d270 ; 0053cc37
        ;   XREF to: 0053d270 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053d270()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053cc3c
    FLD float ptr [ESP + 0x1c]          ; 0053cc40
    ADD ESP,0x14                        ; 0053cc44
    FLDZ                                ; 0053cc47
    FXCH                                ; 0053cc49
    FSTP double ptr [ESP]               ; 0053cc4b
    FCOMP double ptr [ESP]              ; 0053cc4e
    FNSTSW AX                           ; 0053cc51
    SAHF                                ; 0053cc53
    JA 0x0053cc60                       ; 0053cc54
        ;   XREF to: 0053cc60 (CONDITIONAL_JUMP)  ; LAB_0053cc60
    FLD1                                ; 0053cc56
    FCOMP double ptr [ESP]              ; 0053cc58
    FNSTSW AX                           ; 0053cc5b
    SAHF                                ; 0053cc5d
    JNC 0x0053cc15                      ; 0053cc5e
        ;   XREF to: 0053cc15 (CONDITIONAL_JUMP)  ; LAB_0053cc15
    XOR EAX,EAX                         ; 0053cc60
        ;   Label: LAB_0053cc60
    MOV ESP,EBP                         ; 0053cc62
    POP EBP                             ; 0053cc64
    POP EDI                             ; 0053cc65
    POP ESI                             ; 0053cc66
    POP EBX                             ; 0053cc67
    RET                                 ; 0053cc68

