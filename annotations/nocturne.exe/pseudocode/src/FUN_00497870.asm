; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00497870(int param_1,float *param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_00495a20 at 004960e4
;
; Referenced Globals:
;   float FLOAT_005820f2 = 0.5
;   undefined4 DAT_01c713d8
;   undefined4 DAT_01c713dc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497870
        ;   Label: FUN_00497870
    PUSH ESI                            ; 00497871
    PUSH EDI                            ; 00497872
    SUB ESP,0x24                        ; 00497873
    MOV ESI,dword ptr [ESP + 0x38]      ; 00497876
    MOV EDX,dword ptr [0x01c713dc]      ; 0049787a | DAT_01c713dc
    PUSH EDX                            ; 00497880
    LEA EAX,[ESP + 0x4]                 ; 00497881
    MOV EDI,dword ptr [ESP + 0x38]      ; 00497885
    PUSH EAX                            ; 00497889
    ADD EDI,0x150                       ; 0049788a
    PUSH EDI                            ; 00497890
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00497891
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00497896
    MOV ECX,dword ptr [0x01c713d8]      ; 00497899 | DAT_01c713d8
    PUSH ECX                            ; 0049789f
    MOV EBX,EAX                         ; 004978a0
    LEA EAX,[ESP + 0x1c]                ; 004978a2
    PUSH EAX                            ; 004978a6
    PUSH EDI                            ; 004978a7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004978a8
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    FLD float ptr [EAX]                 ; 004978ad
    FADD float ptr [EBX]                ; 004978af
    ADD ESP,0xc                         ; 004978b1
    FSTP float ptr [ESP + 0xc]          ; 004978b4
    FLD float ptr [EAX + 0x4]           ; 004978b8
    FADD float ptr [EBX + 0x4]          ; 004978bb
    FLD float ptr [ESP + 0xc]           ; 004978be
    FXCH                                ; 004978c2
    FSTP float ptr [ESP + 0x10]         ; 004978c4
    FLD float ptr [EAX + 0x8]           ; 004978c8
    FADD float ptr [EBX + 0x8]          ; 004978cb
    FXCH                                ; 004978ce
    FLD float ptr [0x005820f2]          ; 004978d0 | FLOAT_005820f2
    FXCH                                ; 004978d6
    FMUL ST1                            ; 004978d8
    FXCH ST2                            ; 004978da
    FSTP float ptr [ESP + 0x14]         ; 004978dc
    FXCH                                ; 004978e0
    FSTP float ptr [ESI]                ; 004978e2
    FLD float ptr [ESP + 0x10]          ; 004978e4
    FMUL ST1                            ; 004978e8
    FSTP float ptr [ESI + 0x4]          ; 004978ea
    FMUL float ptr [ESP + 0x14]         ; 004978ed
    MOV EAX,ESI                         ; 004978f1
    FSTP float ptr [ESI + 0x8]          ; 004978f3
    ADD ESP,0x24                        ; 004978f6
    POP EDI                             ; 004978f9
    POP ESI                             ; 004978fa
    POP EBX                             ; 004978fb
    RET                                 ; 004978fc

