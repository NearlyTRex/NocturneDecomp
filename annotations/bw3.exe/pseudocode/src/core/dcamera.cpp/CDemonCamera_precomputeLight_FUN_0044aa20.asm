; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044aa20(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; CRect *          Stack[0xc]:4   rect
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 0053526a
;   core_set.cpp_FUN_00533e5e at 005342a9
;
; Referenced Globals:
;   undefined4 s_movscrn_raw_005b9d05+1
;   TerminatedCString s_core_dcamera_cpp_005b9d12
;   TerminatedCString s_CDemonCamera_precomputeL_005b9d26
;   undefined4 DAT_00b9e554
;   undefined4 DAT_012a6558
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044a3e0
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490
;   core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20
;   core_main.c_FUN_004e4330
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044aa20
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20
    PUSH ESI                            ; 0044aa21
    PUSH EDI                            ; 0044aa22
    PUSH EBP                            ; 0044aa23
    MOV EBP,ESP                         ; 0044aa24
    SUB ESP,0x6c                        ; 0044aa26
    AND ESP,0xfffffff8                  ; 0044aa29
    MOV EBX,dword ptr [EBP + 0x18]      ; 0044aa2c
    MOV EDX,0x80                        ; 0044aa2f
    PUSH 0x5b9d06                       ; 0044aa34 | s_movscrn_raw_005b9d05+1
    LEA EAX,[EBX + 0x1c74]              ; 0044aa39
    XOR ECX,ECX                         ; 0044aa3f
    PUSH EAX                            ; 0044aa41
    MOV dword ptr [ESP + 0x48],EDX      ; 0044aa42
    MOV dword ptr [ESP + 0x4c],ECX      ; 0044aa46
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0044aa4a
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044aa4f
    TEST EAX,EAX                        ; 0044aa52
    JZ 0x0044ad4a                       ; 0044aa54
        ;   XREF to: 0044ad4a (CONDITIONAL_JUMP)  ; LAB_0044ad4a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044aa5a
        ;   Label: LAB_0044aa5a
    TEST EAX,EAX                        ; 0044aa5d
    JNZ 0x0044aa6b                      ; 0044aa5f
        ;   XREF to: 0044aa6b (CONDITIONAL_JUMP)  ; LAB_0044aa6b
    MOV [0x012a6558],EAX                ; 0044aa61 | DAT_012a6558
    MOV [0x00b9e554],EAX                ; 0044aa66 | DAT_00b9e554
    MOV ESI,dword ptr [0x00b9e554]      ; 0044aa6b | DAT_00b9e554
        ;   Label: LAB_0044aa6b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044aa71
    ADD EAX,ESI                         ; 0044aa78
    SHL EAX,0xc                         ; 0044aa7a
    MOV ESI,EAX                         ; 0044aa7d
    SHL EAX,0x4                         ; 0044aa7f
    SUB EAX,ESI                         ; 0044aa82
    MOV ESI,dword ptr [0x00b9e554]      ; 0044aa84 | DAT_00b9e554
    INC ESI                             ; 0044aa8a
    ADD EAX,0xb9e558                    ; 0044aa8b
    MOV dword ptr [0x00b9e554],ESI      ; 0044aa90 | DAT_00b9e554
    CMP ESI,0x18                        ; 0044aa96
    JBE 0x0044aa9d                      ; 0044aa99
        ;   XREF to: 0044aa9d (CONDITIONAL_JUMP)  ; LAB_0044aa9d
    XOR EAX,EAX                         ; 0044aa9b
    MOV ESI,dword ptr [0x00b9e554]      ; 0044aa9d | DAT_00b9e554
        ;   Label: LAB_0044aa9d
    MOV dword ptr [EBX + 0x1c48],EAX    ; 0044aaa3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044aaa9
    ADD EAX,ESI                         ; 0044aab0
    SHL EAX,0xc                         ; 0044aab2
    MOV EDX,dword ptr [0x00b9e554]      ; 0044aab5 | DAT_00b9e554
    MOV ESI,EAX                         ; 0044aabb
    SHL EAX,0x4                         ; 0044aabd
    INC EDX                             ; 0044aac0
    SUB EAX,ESI                         ; 0044aac1
    MOV dword ptr [0x00b9e554],EDX      ; 0044aac3 | DAT_00b9e554
    ADD EAX,0xb9e558                    ; 0044aac9
    CMP EDX,0x18                        ; 0044aace
    JBE 0x0044aad5                      ; 0044aad1
        ;   XREF to: 0044aad5 (CONDITIONAL_JUMP)  ; LAB_0044aad5
    XOR EAX,EAX                         ; 0044aad3
    MOV ESI,dword ptr [0x00b9e554]      ; 0044aad5 | DAT_00b9e554
        ;   Label: LAB_0044aad5
    MOV dword ptr [EBX + 0x1c4c],EAX    ; 0044aadb
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044aae1
    ADD EAX,ESI                         ; 0044aae8
    SHL EAX,0xc                         ; 0044aaea
    MOV ESI,EAX                         ; 0044aaed
    SHL EAX,0x4                         ; 0044aaef
    SUB EAX,ESI                         ; 0044aaf2
    MOV ESI,dword ptr [0x00b9e554]      ; 0044aaf4 | DAT_00b9e554
    INC ESI                             ; 0044aafa
    ADD EAX,0xb9e558                    ; 0044aafb
    MOV dword ptr [0x00b9e554],ESI      ; 0044ab00 | DAT_00b9e554
    CMP ESI,0x18                        ; 0044ab06
    JBE 0x0044ab0d                      ; 0044ab09
        ;   XREF to: 0044ab0d (CONDITIONAL_JUMP)  ; LAB_0044ab0d
    XOR EAX,EAX                         ; 0044ab0b
    MOV dword ptr [EBX + 0x1c50],EAX    ; 0044ab0d
        ;   Label: LAB_0044ab0d
    CMP dword ptr [EBX + 0x1c48],0x0    ; 0044ab13
    JNZ 0x0044ad61                      ; 0044ab1a
        ;   XREF to: 0044ad61 (CONDITIONAL_JUMP)  ; LAB_0044ad61
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ab20
        ;   Label: LAB_0044ab20
    ADD EAX,0x40                        ; 0044ab23
    PUSH EAX                            ; 0044ab26
    MOV ESI,0x5b9d12                    ; 0044ab27 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x6ca                       ; 0044ab2c
    PUSH 0x5b9d26                       ; 0044ab31 | = "CDemonCamera::precomputeLight - Too m..."
    MOV dword ptr [0x01d71de0],ESI      ; 0044ab36 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0044ab3c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044ab42
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0044ab47
    PUSH EBX                            ; 0044ab4a
        ;   Label: LAB_0044ab4a
    CALL core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490 ; 0044ab4b
        ;   XREF to: 0045f490 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0044ab50
    CMP dword ptr [EBP + 0x1c],0x0      ; 0044ab53
    JNZ 0x0044ad80                      ; 0044ab57
        ;   XREF to: 0044ad80 (CONDITIONAL_JUMP)  ; LAB_0044ad80
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ab5d
        ;   Label: LAB_0044ab5d
    MOV EAX,dword ptr [EAX + 0x150]     ; 0044ab60
    DEC EAX                             ; 0044ab66
    MOV dword ptr [ESP + 0x4],EAX       ; 0044ab67
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ab6b
    XOR ESI,ESI                         ; 0044ab6e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044ab70
    MOV dword ptr [ESP + 0x8],ESI       ; 0044ab76
    DEC EAX                             ; 0044ab7a
    MOV dword ptr [ESP],ESI             ; 0044ab7b
    MOV dword ptr [ESP + 0xc],EAX       ; 0044ab7e
    LEA EAX,[EAX]                       ; 0044ab82
    LEA EDX,[EDX]                       ; 0044ab88
    MOV EAX,EAX                         ; 0044ab8e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ab90
        ;   Label: LAB_0044ab90
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044ab94
    MOV dword ptr [ESP + 0x54],EAX      ; 0044ab98
    CMP EAX,EDX                         ; 0044ab9c
    JG 0x0044ad43                       ; 0044ab9e
        ;   XREF to: 0044ad43 (CONDITIONAL_JUMP)  ; LAB_0044ad43
    MOV ESI,dword ptr [ESP]             ; 0044aba4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044aba7
    SUB EAX,ESI                         ; 0044abae
    SHL EAX,0x2                         ; 0044abb0
    MOV dword ptr [ESP + 0x28],EAX      ; 0044abb3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044abb7
    MOV ESI,dword ptr [ESP + 0x8]       ; 0044abbe
    MOV dword ptr [ESP + 0x34],EAX      ; 0044abc2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044abc6
    ADD EAX,ESI                         ; 0044abcd
    SHL EAX,0x8                         ; 0044abcf
    SHL ESI,0x8                         ; 0044abd2
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044abd5
    MOV EAX,ESI                         ; 0044abd9
    SHL EAX,0x4                         ; 0044abdb
    SUB EAX,ESI                         ; 0044abde
    MOV ESI,EAX                         ; 0044abe0
    ADD EAX,0x874588                    ; 0044abe2
    MOV dword ptr [ESP + 0x30],EAX      ; 0044abe7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044abeb
    SHL EAX,0x2                         ; 0044abef
    ADD ESI,0xa38388                    ; 0044abf2
    ADD EAX,EBX                         ; 0044abf8
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044abfa
    MOV dword ptr [ESP + 0x38],EAX      ; 0044abfe
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044ac02
        ;   Label: LAB_0044ac02
    MOV EDX,dword ptr [ESP + 0x28]      ; 0044ac06
    ADD EAX,EDX                         ; 0044ac0a
    MOV ESI,0x3e7                       ; 0044ac0c
    MOV dword ptr [ESP + 0x50],EAX      ; 0044ac11
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044ac15
    MOV dword ptr [ESP + 0x4c],ESI      ; 0044ac19
    ADD EAX,EDX                         ; 0044ac1d
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044ac1f
    MOV dword ptr [ESP + 0x58],EAX      ; 0044ac23
    MOV EAX,dword ptr [EBX + 0x1c48]    ; 0044ac27
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044ac2d
    ADD EAX,ESI                         ; 0044ac31
    ADD EDX,EAX                         ; 0044ac33
    MOV dword ptr [ESP + 0x60],EDX      ; 0044ac35
    MOV EAX,dword ptr [EBX + 0x1c4c]    ; 0044ac39
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044ac3f
    ADD EAX,ESI                         ; 0044ac43
    MOV ECX,dword ptr [ESP + 0x4]       ; 0044ac45
    ADD EDX,EAX                         ; 0044ac49
    XOR EDI,EDI                         ; 0044ac4b
    MOV dword ptr [ESP + 0x64],EDX      ; 0044ac4d
    MOV EAX,dword ptr [EBX + 0x1c50]    ; 0044ac51
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044ac57
    ADD EAX,ESI                         ; 0044ac5b
    MOV dword ptr [ESP + 0x48],EDI      ; 0044ac5d
    ADD EDX,EAX                         ; 0044ac61
    MOV EAX,dword ptr [ESP]             ; 0044ac63
    MOV dword ptr [ESP + 0x5c],EDX      ; 0044ac66
    MOV dword ptr [ESP + 0x68],EAX      ; 0044ac6a
    CMP EAX,ECX                         ; 0044ac6e
    JG 0x0044ace5                       ; 0044ac70
        ;   XREF to: 0044ace5 (CONDITIONAL_JUMP)  ; LAB_0044ace5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044ac72
        ;   Label: LAB_0044ac72
    CMP EAX,0x1                         ; 0044ac76
    JGE 0x0044ae17                      ; 0044ac79
        ;   XREF to: 0044ae17 (CONDITIONAL_JUMP)  ; LAB_0044ae17
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044ac7f
        ;   Label: LAB_0044ac7f
    MOV dword ptr [EAX],0x0             ; 0044ac83
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044ac89
    MOV dword ptr [EAX],0x0             ; 0044ac8d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044ac93
    MOV dword ptr [EAX],0x0             ; 0044ac97
        ;   Label: LAB_0044ac97
    MOV ESI,dword ptr [ESP + 0x58]      ; 0044ac9d
        ;   Label: LAB_0044ac9d
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044aca1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044aca5
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044aca9
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0044acad
    ADD ESI,0xc                         ; 0044acb1
    ADD EDI,0xc                         ; 0044acb4
    ADD EAX,0x4                         ; 0044acb7
    ADD EDX,0x4                         ; 0044acba
    ADD ECX,0x4                         ; 0044acbd
    MOV dword ptr [ESP + 0x58],ESI      ; 0044acc0
    MOV dword ptr [ESP + 0x50],EDI      ; 0044acc4
    MOV dword ptr [ESP + 0x60],EAX      ; 0044acc8
    MOV dword ptr [ESP + 0x64],EDX      ; 0044accc
    MOV ESI,dword ptr [ESP + 0x68]      ; 0044acd0
    MOV dword ptr [ESP + 0x5c],ECX      ; 0044acd4
    INC ESI                             ; 0044acd8
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044acd9
    MOV dword ptr [ESP + 0x68],ESI      ; 0044acdd
    CMP ESI,EDI                         ; 0044ace1
    JLE 0x0044ac72                      ; 0044ace3
        ;   XREF to: 0044ac72 (CONDITIONAL_JUMP)  ; LAB_0044ac72
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044ace5
        ;   Label: LAB_0044ace5
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044ace9
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044aced
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044acf1
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044acf5
    ADD ECX,0x500                       ; 0044acf9
    ADD ESI,0xf00                       ; 0044acff
    ADD EDI,0xf00                       ; 0044ad05
    MOV dword ptr [EDX + 0x14c8],EAX    ; 0044ad0b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044ad11
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044ad15
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044ad19
    MOV dword ptr [EDX + 0x1888],EAX    ; 0044ad1d
    LEA EAX,[EDX + 0x4]                 ; 0044ad23
    MOV dword ptr [ESP + 0x30],EDI      ; 0044ad26
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044ad2a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044ad2e
    INC EDX                             ; 0044ad32
    MOV dword ptr [ESP + 0x38],EAX      ; 0044ad33
    MOV dword ptr [ESP + 0x54],EDX      ; 0044ad37
    CMP EDX,ECX                         ; 0044ad3b
    JLE 0x0044ac02                      ; 0044ad3d
        ;   XREF to: 0044ac02 (CONDITIONAL_JUMP)  ; LAB_0044ac02
    MOV ESP,EBP                         ; 0044ad43
        ;   Label: LAB_0044ad43
    POP EBP                             ; 0044ad45
    POP EDI                             ; 0044ad46
    POP ESI                             ; 0044ad47
    POP EBX                             ; 0044ad48
    RET                                 ; 0044ad49
    MOV EDI,0x1                         ; 0044ad4a
        ;   Label: LAB_0044ad4a
    MOV ESI,0x100                       ; 0044ad4f
    MOV dword ptr [ESP + 0x44],EDI      ; 0044ad54
    MOV dword ptr [ESP + 0x40],ESI      ; 0044ad58
    JMP 0x0044aa5a                      ; 0044ad5c
        ;   XREF to: 0044aa5a (UNCONDITIONAL_JUMP)  ; LAB_0044aa5a
    CMP dword ptr [EBX + 0x1c4c],0x0    ; 0044ad61
        ;   Label: LAB_0044ad61
    JZ 0x0044ab20                       ; 0044ad68
        ;   XREF to: 0044ab20 (CONDITIONAL_JUMP)  ; LAB_0044ab20
    CMP dword ptr [EBX + 0x1c50],0x0    ; 0044ad6e
    JZ 0x0044ab20                       ; 0044ad75
        ;   XREF to: 0044ab20 (CONDITIONAL_JUMP)  ; LAB_0044ab20
    JMP 0x0044ab4a                      ; 0044ad7b
        ;   XREF to: 0044ab4a (UNCONDITIONAL_JUMP)  ; LAB_0044ab4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ad80
        ;   Label: LAB_0044ad80
    CMP dword ptr [EAX + 0x148],0x1e0   ; 0044ad83
    JNZ 0x0044ab5d                      ; 0044ad8d
        ;   XREF to: 0044ab5d (CONDITIONAL_JUMP)  ; LAB_0044ab5d
    MOV EDI,ESP                         ; 0044ad93
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044ad95
    MOVSD ES:EDI,ESI                    ; 0044ad98
    MOVSD ES:EDI,ESI                    ; 0044ad99
    MOVSD ES:EDI,ESI                    ; 0044ad9a
    MOVSD ES:EDI,ESI                    ; 0044ad9b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044ad9c
    XOR ESI,ESI                         ; 0044ada0
    TEST ECX,ECX                        ; 0044ada2
    JLE 0x0044add0                      ; 0044ada4
        ;   XREF to: 0044add0 (CONDITIONAL_JUMP)  ; LAB_0044add0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044ada6
    MOV EAX,EBX                         ; 0044adaa
    ADD EAX,0x4                         ; 0044adac
        ;   Label: LAB_0044adac
    MOV dword ptr [EAX + 0x14c4],0x3e7  ; 0044adaf
    INC ESI                             ; 0044adb9
    MOV dword ptr [EAX + 0x1884],0x0    ; 0044adba
    CMP ESI,EDX                         ; 0044adc4
    JL 0x0044adac                       ; 0044adc6
        ;   XREF to: 0044adac (CONDITIONAL_JUMP)  ; LAB_0044adac
    LEA EAX,[EAX]                       ; 0044adc8
    MOV EDX,EDX                         ; 0044adce
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044add0
        ;   Label: LAB_0044add0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044add4
    INC ESI                             ; 0044add7
    CMP ESI,dword ptr [EAX + 0x154]     ; 0044add8
    JGE 0x0044ab90                      ; 0044adde
        ;   XREF to: 0044ab90 (CONDITIONAL_JUMP)  ; LAB_0044ab90
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ade4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044adeb
    ADD EAX,EBX                         ; 0044adee
    MOV dword ptr [EAX + 0x14c8],0x3e7  ; 0044adf0
        ;   Label: LAB_0044adf0
    MOV dword ptr [EAX + 0x1888],0x0    ; 0044adfa
    INC ESI                             ; 0044ae04
    MOV EDI,dword ptr [EDX + 0x154]     ; 0044ae05
    ADD EAX,0x4                         ; 0044ae0b
    CMP ESI,EDI                         ; 0044ae0e
    JL 0x0044adf0                       ; 0044ae10
        ;   XREF to: 0044adf0 (CONDITIONAL_JUMP)  ; LAB_0044adf0
    JMP 0x0044ab90                      ; 0044ae12
        ;   XREF to: 0044ab90 (UNCONDITIONAL_JUMP)  ; LAB_0044ab90
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044ae17
        ;   Label: LAB_0044ae17
    CMP EDX,0x1                         ; 0044ae1b
    JL 0x0044ac7f                       ; 0044ae1e
        ;   XREF to: 0044ac7f (CONDITIONAL_JUMP)  ; LAB_0044ac7f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044ae24
    IMUL EAX,dword ptr [ESI + 0x14c]    ; 0044ae27
    MOV ESI,dword ptr [ESI + 0x144]     ; 0044ae2e
    SUB ESI,0x2                         ; 0044ae34
    CMP EAX,ESI                         ; 0044ae37
    JG 0x0044ac7f                       ; 0044ae39
        ;   XREF to: 0044ac7f (CONDITIONAL_JUMP)  ; LAB_0044ac7f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae3f
    MOV ESI,EDX                         ; 0044ae42
    IMUL ESI,dword ptr [EAX + 0x14c]    ; 0044ae44
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044ae4b
    SUB EAX,0x2                         ; 0044ae51
    CMP ESI,EAX                         ; 0044ae54
    JG 0x0044ac7f                       ; 0044ae56
        ;   XREF to: 0044ac7f (CONDITIONAL_JUMP)  ; LAB_0044ac7f
    CMP dword ptr [ESP + 0x44],0x0      ; 0044ae5c
    JZ 0x0044af23                       ; 0044ae61
        ;   XREF to: 0044af23 (CONDITIONAL_JUMP)  ; LAB_0044af23
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044ae67
        ;   Label: LAB_0044ae67
    PUSH EDX                            ; 0044ae6b
    PUSH EBX                            ; 0044ae6c
    LEA ESI,[ESP + 0x18]                ; 0044ae6d
    LEA EDI,[ESP + 0x24]                ; 0044ae71
    CALL core_dcamera.cpp_FUN_0044a3e0  ; 0044ae75
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044a3e0()
    LEA ESI,[ESP + 0x18]                ; 0044ae7a
    ADD ESP,0x8                         ; 0044ae7e
    MOVSD ES:EDI,ESI                    ; 0044ae81
    MOVSD ES:EDI,ESI                    ; 0044ae82
    MOVSD ES:EDI,ESI                    ; 0044ae83
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044ae84
    TEST ECX,ECX                        ; 0044ae88
    JLE 0x0044ac7f                      ; 0044ae8a
        ;   XREF to: 0044ac7f (CONDITIONAL_JUMP)  ; LAB_0044ac7f
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044ae90
    MOV EAX,ECX                         ; 0044ae94
    MOV EDI,dword ptr [ESP + 0x54]      ; 0044ae96
    SUB EAX,ESI                         ; 0044ae9a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0044ae9c
    PUSH EDI                            ; 0044aea0
    MOV dword ptr [ESI],EAX             ; 0044aea1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044aea3
    PUSH EAX                            ; 0044aea7
    LEA EAX,[ESP + 0x24]                ; 0044aea8
    PUSH EAX                            ; 0044aeac
    PUSH EBX                            ; 0044aead
    CALL core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20 ; 0044aeae
        ;   XREF to: 0045cd20 (UNCONDITIONAL_CALL)  ; ushort * core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20(CDemonLight * this_ptr, CVector3i * projected_coord, uchar x_round_flag, uchar y_round_flag)
    ADD ESP,0x10                        ; 0044aeb3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044aeb6
    MOV dword ptr [ESI],EAX             ; 0044aeba
    TEST EAX,EAX                        ; 0044aebc
    JZ 0x0044af4e                       ; 0044aebe
        ;   XREF to: 0044af4e (CONDITIONAL_JUMP)  ; LAB_0044af4e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044aec4
    MOV CL,byte ptr [EBX + 0x1cc8]      ; 0044aec8
    SAR ESI,CL                          ; 0044aece
    MOV ECX,dword ptr [EBX + 0x1c68]    ; 0044aed0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044aed6
    AND ESI,ECX                         ; 0044aeda
    MOV CL,byte ptr [EBX + 0x1ccc]      ; 0044aedc
    MOV EDI,dword ptr [EBX + 0x1c68]    ; 0044aee2
    SAR EAX,CL                          ; 0044aee8
    MOV CL,byte ptr [EBX + 0x1c60]      ; 0044aeea
    AND EAX,EDI                         ; 0044aef0
    SHL EAX,CL                          ; 0044aef2
    ADD EAX,ESI                         ; 0044aef4
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044aef6
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044aefa
    MOV dword ptr [ESI],EAX             ; 0044aefe
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044af00
    CMP EAX,EDX                         ; 0044af04
    JLE 0x0044af0c                      ; 0044af06
        ;   XREF to: 0044af0c (CONDITIONAL_JUMP)  ; LAB_0044af0c
    MOV dword ptr [ESP + 0x48],EAX      ; 0044af08
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044af0c
        ;   Label: LAB_0044af0c
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0044af10
    JGE 0x0044ac9d                      ; 0044af14
        ;   XREF to: 0044ac9d (CONDITIONAL_JUMP)  ; LAB_0044ac9d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044af1a
    JMP 0x0044ac9d                      ; 0044af1e
        ;   XREF to: 0044ac9d (UNCONDITIONAL_JUMP)  ; LAB_0044ac9d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044af23
        ;   Label: LAB_0044af23
    FLD float ptr [EAX + 0x4]           ; 0044af27
    FMUL float ptr [EBX + 0x24]         ; 0044af2a
    FLD float ptr [EAX]                 ; 0044af2d
    FMUL float ptr [EBX + 0x18]         ; 0044af2f
    FADDP                               ; 0044af32
    FLD float ptr [EAX + 0x8]           ; 0044af34
    FMUL float ptr [EBX + 0x30]         ; 0044af37
    FADDP                               ; 0044af3a
    FLDZ                                ; 0044af3c
    FCOMPP                              ; 0044af3e
    FNSTSW AX                           ; 0044af40
    SAHF                                ; 0044af42
    JBE 0x0044ae67                      ; 0044af43
        ;   XREF to: 0044ae67 (CONDITIONAL_JUMP)  ; LAB_0044ae67
    JMP 0x0044ac7f                      ; 0044af49
        ;   XREF to: 0044ac7f (UNCONDITIONAL_JUMP)  ; LAB_0044ac7f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044af4e
        ;   Label: LAB_0044af4e
    MOV dword ptr [EAX],0x0             ; 0044af52
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044af58
    MOV dword ptr [ESI],0x0             ; 0044af5c
    JMP 0x0044ac97                      ; 0044af62
        ;   XREF to: 0044ac97 (UNCONDITIONAL_JUMP)  ; LAB_0044ac97

