; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_dcamera_cpp_FUN_00449f80(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070 at 0044b15f
;   core_dcamera.cpp_FUN_0044f6a0 at 0044f6db
;   core_dcamera.cpp_FUN_00450e10 at 00450ff5
;   core_game.cpp_FUN_004b6f30 at 004b717a
;   core_game.cpp_FUN_004c07b0 at 004c0fb0
;   core_sound.cpp_updateListeners_FUN_0055e8b0 at 0055ed82
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449f80
        ;   Label: core_dcamera.cpp_FUN_00449f80
    PUSH EDI                            ; 00449f81
    PUSH EBP                            ; 00449f82
    SUB ESP,0x1c                        ; 00449f83
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00449f86
    MOV dword ptr [ESP + 0x18],ESI      ; 00449f8a
    MOV ESI,dword ptr [ESP + 0x30]      ; 00449f8e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00449f92
    MOV dword ptr [ESP + 0x8],EAX       ; 00449f95
    MOV EAX,dword ptr [ESI]             ; 00449f99
    MOV EDX,dword ptr [EBP + 0x1c8]     ; 00449f9b
    MOV EBX,dword ptr [EBP + 0x1c0]     ; 00449fa1
    SUB EAX,EDX                         ; 00449fa7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00449fa9
    LEA EDI,[EBP + 0x19c]               ; 00449fad
    IMUL EDX                            ; 00449fb3
    IDIV EBX                            ; 00449fb5
    MOV dword ptr [ESP],EAX             ; 00449fb7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00449fba
    MOV EAX,dword ptr [ESI + 0x4]       ; 00449fbe
    MOV ECX,dword ptr [EBP + 0x1cc]     ; 00449fc1
    MOV EBX,dword ptr [EBP + 0x1c4]     ; 00449fc7
    SUB EAX,ECX                         ; 00449fcd
    MOV ESI,ESP                         ; 00449fcf
    IMUL EDX                            ; 00449fd1
    IDIV EBX                            ; 00449fd3
    MOV dword ptr [ESP + 0x4],EAX       ; 00449fd5
    MOV EAX,dword ptr [ESI]             ; 00449fd9
    IMUL dword ptr [EDI]                ; 00449fdb
    MOV EBX,EAX                         ; 00449fdd
    MOV ECX,EDX                         ; 00449fdf
    MOV EAX,dword ptr [ESI + 0x4]       ; 00449fe1
    IMUL dword ptr [EDI + 0xc]          ; 00449fe4
    ADD EBX,EAX                         ; 00449fe7
    ADC ECX,EDX                         ; 00449fe9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00449feb
    IMUL dword ptr [EDI + 0x18]         ; 00449fee
    ADD EAX,EBX                         ; 00449ff1
    ADC EDX,ECX                         ; 00449ff3
    SHRD EAX,EDX,0x10                   ; 00449ff5
    MOV EBX,dword ptr [EBP + 0x16c]     ; 00449ff9
    MOV ESI,ESP                         ; 00449fff
    ADD EBX,EAX                         ; 0044a001
    LEA EDI,[EBP + 0x1a0]               ; 0044a003
    MOV dword ptr [ESP + 0xc],EBX       ; 0044a009
    MOV EAX,dword ptr [ESI]             ; 0044a00d
    IMUL dword ptr [EDI]                ; 0044a00f
    MOV EBX,EAX                         ; 0044a011
    MOV ECX,EDX                         ; 0044a013
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a015
    IMUL dword ptr [EDI + 0xc]          ; 0044a018
    ADD EBX,EAX                         ; 0044a01b
    ADC ECX,EDX                         ; 0044a01d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a01f
    IMUL dword ptr [EDI + 0x18]         ; 0044a022
    ADD EAX,EBX                         ; 0044a025
    ADC EDX,ECX                         ; 0044a027
    SHRD EAX,EDX,0x10                   ; 0044a029
    MOV EBX,dword ptr [EBP + 0x170]     ; 0044a02d
    MOV ESI,ESP                         ; 0044a033
    ADD EBX,EAX                         ; 0044a035
    LEA EDI,[EBP + 0x1a4]               ; 0044a037
    MOV dword ptr [ESP + 0x10],EBX      ; 0044a03d
    MOV EAX,dword ptr [ESI]             ; 0044a041
    IMUL dword ptr [EDI]                ; 0044a043
    MOV EBX,EAX                         ; 0044a045
    MOV ECX,EDX                         ; 0044a047
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a049
    IMUL dword ptr [EDI + 0xc]          ; 0044a04c
    ADD EBX,EAX                         ; 0044a04f
    ADC ECX,EDX                         ; 0044a051
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a053
    IMUL dword ptr [EDI + 0x18]         ; 0044a056
    ADD EAX,EBX                         ; 0044a059
    ADC EDX,ECX                         ; 0044a05b
    SHRD EAX,EDX,0x10                   ; 0044a05d
    MOV EBX,dword ptr [EBP + 0x174]     ; 0044a061
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044a067
    ADD EBX,EAX                         ; 0044a06b
    LEA ESI,[ESP + 0xc]                 ; 0044a06d
    MOV dword ptr [ESP + 0x14],EBX      ; 0044a071
    MOVSD ES:EDI,ESI                    ; 0044a075
    MOVSD ES:EDI,ESI                    ; 0044a076
    MOVSD ES:EDI,ESI                    ; 0044a077
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044a078
    ADD ESP,0x1c                        ; 0044a07c
    POP EBP                             ; 0044a07f
    POP EDI                             ; 0044a080
    POP EBX                             ; 0044a081
    RET                                 ; 0044a082

