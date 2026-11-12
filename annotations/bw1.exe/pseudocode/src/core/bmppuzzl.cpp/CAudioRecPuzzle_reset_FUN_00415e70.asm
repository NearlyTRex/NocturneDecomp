; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_reset_FUN_00415e70(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_audioreel_kfm_005d3d7b
;   TerminatedCString s_audioreelshadow_kfm_005d3d89
;   undefined4 DAT_007c397c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415e70
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_reset_FUN_00415e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415e71
    MOV dword ptr [EBX + 0xbf0],0x3     ; 00415e75
    MOV dword ptr [EBX + 0xc00],0x2     ; 00415e7f
    MOV dword ptr [EBX + 0xbf4],0x14    ; 00415e89
    MOV dword ptr [EBX + 0xc04],0x6     ; 00415e93
    MOV dword ptr [EBX + 0xbf8],0x2     ; 00415e9d
    MOV dword ptr [EBX + 0xc08],0x6     ; 00415ea7
    MOV dword ptr [EBX + 0xbfc],0x12    ; 00415eb1
    MOV dword ptr [EBX + 0xc0c],0x6     ; 00415ebb
    MOV dword ptr [EBX + 0x18],0x0      ; 00415ec5
    MOV dword ptr [EBX + 0x30],0x0      ; 00415ecc
    MOV dword ptr [EBX + 0x34],0x1      ; 00415ed3
    MOV dword ptr [EBX + 0x38],0x2      ; 00415eda
    MOV dword ptr [EBX + 0x3c],0x2      ; 00415ee1
    MOV dword ptr [EBX + 0x40],0x2      ; 00415ee8
    MOV dword ptr [EBX + 0x44],0x3      ; 00415eef
    MOV dword ptr [EBX + 0x48],0x3      ; 00415ef6
    MOV EDX,0xffffffff                  ; 00415efd
    MOV dword ptr [EBX + 0x4c],0x1      ; 00415f02
    PUSH 0x5d3d7b                       ; 00415f09 | = "audioreel.kfm"
    MOV dword ptr [EBX + 0x24],0x0      ; 00415f0e
    LEA EAX,[EBX + 0x8f8]               ; 00415f15
    MOV dword ptr [EBX + 0x28],0x0      ; 00415f1b
    PUSH EAX                            ; 00415f22
    MOV dword ptr [EBX + 0x2c],0x0      ; 00415f23
    MOV dword ptr [0x007c397c],EDX      ; 00415f2a | DAT_007c397c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00415f30
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00415f35
    PUSH 0x5d3d89                       ; 00415f38 | = "audioreelshadow.kfm"
    LEA EAX,[EBX + 0xa74]               ; 00415f3d
    PUSH EAX                            ; 00415f43
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00415f44
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x5c],0x0      ; 00415f49
    MOV dword ptr [EBX + 0xc20],0x2     ; 00415f50
    MOV dword ptr [EBX + 0xc24],0x2     ; 00415f5a
    MOV dword ptr [EBX + 0xc28],0x2     ; 00415f64
    MOV dword ptr [EBX + 0xc2c],0x2     ; 00415f6e
    MOV dword ptr [EBX + 0xc30],0x2     ; 00415f78
    MOV dword ptr [EBX + 0xc10],0x0     ; 00415f82
    MOV dword ptr [EBX + 0xc34],0x0     ; 00415f8c
    MOV dword ptr [EBX + 0x50],0x0      ; 00415f96
    MOV dword ptr [EBX + 0x54],0x0      ; 00415f9d
    ADD ESP,0x8                         ; 00415fa4
    MOV dword ptr [EBX + 0x58],0x0      ; 00415fa7
    POP EBX                             ; 00415fae
    NOP                                 ; 00415faf

