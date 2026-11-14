; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_reset_FUN_00411c30(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_audioreel_kfm_005b65c7
;   TerminatedCString s_audioreelshadow_kfm_005b65d5
;   undefined4 DAT_007dffb8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411c30
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_reset_FUN_00411c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411c31
    MOV dword ptr [EBX + 0xbe4],0x3     ; 00411c35
    MOV dword ptr [EBX + 0xbf4],0x2     ; 00411c3f
    MOV dword ptr [EBX + 0xbe8],0x14    ; 00411c49
    MOV dword ptr [EBX + 0xbf8],0x6     ; 00411c53
    MOV dword ptr [EBX + 0xbec],0x2     ; 00411c5d
    MOV dword ptr [EBX + 0xbfc],0x6     ; 00411c67
    MOV dword ptr [EBX + 0xbf0],0x12    ; 00411c71
    MOV dword ptr [EBX + 0xc00],0x6     ; 00411c7b
    MOV dword ptr [EBX + 0x18],0x0      ; 00411c85
    MOV dword ptr [EBX + 0x30],0x0      ; 00411c8c
    MOV dword ptr [EBX + 0x34],0x1      ; 00411c93
    MOV dword ptr [EBX + 0x38],0x2      ; 00411c9a
    MOV dword ptr [EBX + 0x3c],0x2      ; 00411ca1
    MOV dword ptr [EBX + 0x40],0x2      ; 00411ca8
    MOV dword ptr [EBX + 0x44],0x3      ; 00411caf
    MOV dword ptr [EBX + 0x48],0x3      ; 00411cb6
    MOV EDX,0xffffffff                  ; 00411cbd
    MOV dword ptr [EBX + 0x4c],0x1      ; 00411cc2
    PUSH 0x5b65c7                       ; 00411cc9 | = "audioreel.kfm"
    MOV dword ptr [EBX + 0x24],0x0      ; 00411cce
    LEA EAX,[EBX + 0x8ec]               ; 00411cd5
    MOV dword ptr [EBX + 0x28],0x0      ; 00411cdb
    PUSH EAX                            ; 00411ce2
    MOV dword ptr [EBX + 0x2c],0x0      ; 00411ce3
    MOV dword ptr [0x007dffb8],EDX      ; 00411cea | DAT_007dffb8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00411cf0
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00411cf5
    PUSH 0x5b65d5                       ; 00411cf8 | = "audioreelshadow.kfm"
    LEA EAX,[EBX + 0xa68]               ; 00411cfd
    PUSH EAX                            ; 00411d03
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00411d04
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x50],0x0      ; 00411d09
    MOV dword ptr [EBX + 0xc14],0x2     ; 00411d10
    MOV dword ptr [EBX + 0xc18],0x2     ; 00411d1a
    MOV dword ptr [EBX + 0xc1c],0x2     ; 00411d24
    MOV dword ptr [EBX + 0xc20],0x2     ; 00411d2e
    MOV dword ptr [EBX + 0xc24],0x2     ; 00411d38
    MOV dword ptr [EBX + 0xc04],0x0     ; 00411d42
    ADD ESP,0x8                         ; 00411d4c
    MOV dword ptr [EBX + 0xc28],0x0     ; 00411d4f
    POP EBX                             ; 00411d59
    LEA EAX,[EAX]                       ; 00411d5a

