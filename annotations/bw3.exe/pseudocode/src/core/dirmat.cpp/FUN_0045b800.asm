; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_0045b800(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[44]:
;   core_actor.cpp_FUN_00408b00 at 00408b1a
;   core_actor.cpp_FUN_00408b80 at 00408b9c
;   core_box.cpp_CBox_loadFromFile_FUN_0041d480 at 0041d5e2
;   core_box.cpp_CBox_processPhysics_FUN_0041b470 at 0041b70c
;   core_box.cpp_FUN_0041b1d0 at 0041b371
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570 at 00422925
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_004221c0 at 004223a3
;   core_charactr.cpp_FUN_004300e0 at 004303d1
;   core_charactr.cpp_FUN_00434190 at 0043446d
;   core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0 at 0043e074
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0045b800
        ;   Label: core_dirmat.cpp_FUN_0045b800
    SUB ESP,0xc                         ; 0045b801
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045b804
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045b808
    MOV ECX,ESI                         ; 0045b80c
    FLD float ptr [EAX + 0x4]           ; 0045b80e
    FMUL float ptr [EDX + 0x4]          ; 0045b811
    FLD float ptr [EAX + 0x4]           ; 0045b814
    FMUL float ptr [EDX + 0x10]         ; 0045b817
    FLD float ptr [EAX + 0x4]           ; 0045b81a
    FMUL float ptr [EDX + 0x1c]         ; 0045b81d
    FLD float ptr [EAX]                 ; 0045b820
    FMUL float ptr [EDX]                ; 0045b822
    FLD float ptr [EAX]                 ; 0045b824
    FMUL float ptr [EDX + 0xc]          ; 0045b826
    FLD float ptr [EAX]                 ; 0045b829
    FXCH ST2                            ; 0045b82b
    FADDP ST5,ST0                       ; 0045b82d
    FXCH                                ; 0045b82f
    FMUL float ptr [EDX + 0x18]         ; 0045b831
    FLD float ptr [EAX + 0x8]           ; 0045b834
    FMUL float ptr [EDX + 0x8]          ; 0045b837
    FXCH ST2                            ; 0045b83a
    FADDP ST4,ST0                       ; 0045b83c
    FADDP ST2,ST0                       ; 0045b83e
    FLD float ptr [EAX + 0x8]           ; 0045b840
    FMUL float ptr [EDX + 0x14]         ; 0045b843
    FLD float ptr [EAX + 0x8]           ; 0045b846
    FMUL float ptr [EDX + 0x20]         ; 0045b849
    MOV EDI,ESI                         ; 0045b84c
    MOV ESI,ESP                         ; 0045b84e
    FXCH ST2                            ; 0045b850
    FADDP ST5,ST0                       ; 0045b852
    FADDP ST3,ST0                       ; 0045b854
    FADDP                               ; 0045b856
    FXCH                                ; 0045b858
    FSTP float ptr [ESP + 0x4]          ; 0045b85a
    FSTP float ptr [ESP + 0x8]          ; 0045b85e
    FSTP float ptr [ESP]                ; 0045b862
    MOVSD ES:EDI,ESI                    ; 0045b865
    MOVSD ES:EDI,ESI                    ; 0045b866
    MOVSD ES:EDI,ESI                    ; 0045b867
    MOV EAX,ECX                         ; 0045b868
    ADD ESP,0xc                         ; 0045b86a
    POP EDI                             ; 0045b86d
    RET                                 ; 0045b86e

