; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0044fb10(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CMatrix3x3f *    Stack[0x10]:4   transform_matrix
;
; Referenced Globals:
;   undefined4 DAT_005fe5fc
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044fb10
        ;   Label: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044fb10
    SUB ESP,0x30                        ; 0044fb11
    MOV EBP,dword ptr [ESP + 0x38]      ; 0044fb14
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044fb18
    PUSH EDI                            ; 0044fb1c
    PUSH ESI                            ; 0044fb1d
    PUSH EBX                            ; 0044fb1e
    LEA EBX,[EBP + 0x1498]              ; 0044fb1f
    LEA EDI,[EBP + 0x148c]              ; 0044fb25
    LEA ESI,[EBP + 0x16c]               ; 0044fb2b
    LEA EAX,[EBP + 0x4]                 ; 0044fb31
    MOVSD ES:EDI,ESI                    ; 0044fb34
    MOVSD ES:EDI,ESI                    ; 0044fb35
    MOVSD ES:EDI,ESI                    ; 0044fb36
    CMP EBX,EAX                         ; 0044fb37
    JZ 0x0044fb4b                       ; 0044fb39
        ;   XREF to: 0044fb4b (CONDITIONAL_JUMP)  ; LAB_0044fb4b
    MOV ECX,dword ptr [EAX]             ; 0044fb3b
    MOV dword ptr [EBX],ECX             ; 0044fb3d
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044fb3f
    MOV dword ptr [EBX + 0x4],ECX       ; 0044fb42
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044fb45
    MOV dword ptr [EBX + 0x8],ECX       ; 0044fb48
    MOV EAX,dword ptr [EBP + 0x178]     ; 0044fb4b
        ;   Label: LAB_0044fb4b
    MOV dword ptr [EBP + 0x14a4],EAX    ; 0044fb51
    MOV EAX,dword ptr [EBP + 0x17c]     ; 0044fb57
    MOV dword ptr [EBP + 0x14a8],EAX    ; 0044fb5d
    MOV EAX,dword ptr [EBP + 0x180]     ; 0044fb63
    MOV dword ptr [EBP + 0x14ac],EAX    ; 0044fb69
    MOV EAX,dword ptr [EBP + 0x184]     ; 0044fb6f
    MOV dword ptr [EBP + 0x14b0],EAX    ; 0044fb75
    MOV EAX,dword ptr [EBP + 0x188]     ; 0044fb7b
    MOV dword ptr [EBP + 0x14b4],EAX    ; 0044fb81
    MOV EAX,dword ptr [EBP + 0x18c]     ; 0044fb87
    MOV dword ptr [EBP + 0x14b8],EAX    ; 0044fb8d
    MOV EAX,dword ptr [EBP + 0x190]     ; 0044fb93
    MOV dword ptr [EBP + 0x14bc],EAX    ; 0044fb99
    MOV EAX,dword ptr [EBP + 0x194]     ; 0044fb9f
    MOV dword ptr [EBP + 0x14c0],EAX    ; 0044fba5
    LEA EDI,[ESP + 0xc]                 ; 0044fbab
    MOV EAX,dword ptr [EBP + 0x198]     ; 0044fbaf
    LEA ESI,[ESP + 0x24]                ; 0044fbb5
    MOV dword ptr [EBP + 0x14c4],EAX    ; 0044fbb9
    LEA EBX,[EBP + 0x4]                 ; 0044fbbf
    FLD float ptr [EDX + 0x4]           ; 0044fbc2
    FLD float ptr [EDX + 0x8]           ; 0044fbc5
    FLD float ptr [EDX]                 ; 0044fbc8
    LEA EAX,[ESP + 0xc]                 ; 0044fbca
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0044fbce
    PUSH EAX                            ; 0044fbd2
    FSUB float ptr [EBX]                ; 0044fbd3
    FXCH ST2                            ; 0044fbd5
    FSUB float ptr [EBX + 0x4]          ; 0044fbd7
    FXCH                                ; 0044fbda
    FSUB float ptr [EBX + 0x8]          ; 0044fbdc
    FXCH ST2                            ; 0044fbdf
    FSTP float ptr [ESP + 0x28]         ; 0044fbe1
    FSTP float ptr [ESP + 0x2c]         ; 0044fbe5
    FSTP float ptr [ESP + 0x30]         ; 0044fbe9
    MOVSD ES:EDI,ESI                    ; 0044fbed
    MOVSD ES:EDI,ESI                    ; 0044fbee
    MOVSD ES:EDI,ESI                    ; 0044fbef
    PUSH EDX                            ; 0044fbf0
    LEA ESI,[ESP + 0x38]                ; 0044fbf1
    LEA EDI,[ESP + 0x20]                ; 0044fbf5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700 ; 0044fbf9
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x38]                ; 0044fbfe
    ADD ESP,0x8                         ; 0044fc02
    LEA EAX,[ESP + 0x18]                ; 0044fc05
    MOVSD ES:EDI,ESI                    ; 0044fc09
    MOVSD ES:EDI,ESI                    ; 0044fc0a
    MOVSD ES:EDI,ESI                    ; 0044fc0b
    CMP EBX,EAX                         ; 0044fc0c
    JZ 0x0044fc24                       ; 0044fc0e
        ;   XREF to: 0044fc24 (CONDITIONAL_JUMP)  ; LAB_0044fc24
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044fc10
    MOV dword ptr [EBX],EAX             ; 0044fc14
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044fc16
    MOV dword ptr [EBX + 0x4],EAX       ; 0044fc1a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044fc1d
    MOV dword ptr [EBX + 0x8],EAX       ; 0044fc21
    LEA EAX,[EBP + 0x4]                 ; 0044fc24
        ;   Label: LAB_0044fc24
    LEA EBX,[EBP + 0x16c]               ; 0044fc27
    FLD float ptr [EAX]                 ; 0044fc2d
    FMUL float ptr [0x005fe5fc]         ; 0044fc2f | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 0044fc35
    FLD float ptr [EAX + 0x4]           ; 0044fc37
    FMUL float ptr [0x005fe5fc]         ; 0044fc3a | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 0044fc40
    FLD float ptr [EAX + 0x8]           ; 0044fc43
    FMUL float ptr [0x005fe5fc]         ; 0044fc46 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 0044fc4c
    POP EBX                             ; 0044fc4f
    POP ESI                             ; 0044fc50
    POP EDI                             ; 0044fc51
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044fc52
    FILD dword ptr [EBP + 0x14a8]       ; 0044fc56
    FMUL float ptr [EAX + 0xc]          ; 0044fc5c
    FILD dword ptr [EBP + 0x14a4]       ; 0044fc5f
    FMUL float ptr [EAX]                ; 0044fc65
    FADDP                               ; 0044fc67
    FILD dword ptr [EBP + 0x14ac]       ; 0044fc69
    FMUL float ptr [EAX + 0x18]         ; 0044fc6f
    FADDP                               ; 0044fc72
    FILD dword ptr [EBP + 0x14a4]       ; 0044fc74
    FXCH                                ; 0044fc7a
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fc7c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x178]       ; 0044fc81
    FMUL float ptr [EAX + 0x4]          ; 0044fc87
    FILD dword ptr [EBP + 0x14a8]       ; 0044fc8a
    FMUL float ptr [EAX + 0x10]         ; 0044fc90
    FADDP                               ; 0044fc93
    FILD dword ptr [EBP + 0x14ac]       ; 0044fc95
    FMUL float ptr [EAX + 0x1c]         ; 0044fc9b
    FADDP                               ; 0044fc9e
    FILD dword ptr [EBP + 0x14a4]       ; 0044fca0
    FXCH                                ; 0044fca6
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fca8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x17c]       ; 0044fcad
    FMUL float ptr [EAX + 0x8]          ; 0044fcb3
    FILD dword ptr [EBP + 0x14a8]       ; 0044fcb6
    FMUL float ptr [EAX + 0x14]         ; 0044fcbc
    FADDP                               ; 0044fcbf
    FILD dword ptr [EBP + 0x14ac]       ; 0044fcc1
    FMUL float ptr [EAX + 0x20]         ; 0044fcc7
    FADDP                               ; 0044fcca
    FILD dword ptr [EBP + 0x14b4]       ; 0044fccc
    FXCH                                ; 0044fcd2
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fcd4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x180]       ; 0044fcd9
    FMUL float ptr [EAX + 0xc]          ; 0044fcdf
    FILD dword ptr [EBP + 0x14b0]       ; 0044fce2
    FMUL float ptr [EAX]                ; 0044fce8
    FADDP                               ; 0044fcea
    FILD dword ptr [EBP + 0x14b8]       ; 0044fcec
    FMUL float ptr [EAX + 0x18]         ; 0044fcf2
    FADDP                               ; 0044fcf5
    FILD dword ptr [EBP + 0x14b0]       ; 0044fcf7
    FXCH                                ; 0044fcfd
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fcff
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x184]       ; 0044fd04
    FMUL float ptr [EAX + 0x4]          ; 0044fd0a
    FILD dword ptr [EBP + 0x14b4]       ; 0044fd0d
    FMUL float ptr [EAX + 0x10]         ; 0044fd13
    FADDP                               ; 0044fd16
    FILD dword ptr [EBP + 0x14b8]       ; 0044fd18
    FMUL float ptr [EAX + 0x1c]         ; 0044fd1e
    FADDP                               ; 0044fd21
    FILD dword ptr [EBP + 0x14b0]       ; 0044fd23
    FXCH                                ; 0044fd29
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fd2b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x188]       ; 0044fd30
    FMUL float ptr [EAX + 0x8]          ; 0044fd36
    FILD dword ptr [EBP + 0x14b4]       ; 0044fd39
    FMUL float ptr [EAX + 0x14]         ; 0044fd3f
    FADDP                               ; 0044fd42
    FILD dword ptr [EBP + 0x14b8]       ; 0044fd44
    FMUL float ptr [EAX + 0x20]         ; 0044fd4a
    FADDP                               ; 0044fd4d
    FILD dword ptr [EBP + 0x14c0]       ; 0044fd4f
    FXCH                                ; 0044fd55
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fd57
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x18c]       ; 0044fd5c
    FMUL float ptr [EAX + 0xc]          ; 0044fd62
    FILD dword ptr [EBP + 0x14bc]       ; 0044fd65
    FMUL float ptr [EAX]                ; 0044fd6b
    FADDP                               ; 0044fd6d
    FILD dword ptr [EBP + 0x14c4]       ; 0044fd6f
    FMUL float ptr [EAX + 0x18]         ; 0044fd75
    FADDP                               ; 0044fd78
    FILD dword ptr [EBP + 0x14bc]       ; 0044fd7a
    FXCH                                ; 0044fd80
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fd82
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x190]       ; 0044fd87
    FMUL float ptr [EAX + 0x4]          ; 0044fd8d
    FILD dword ptr [EBP + 0x14c0]       ; 0044fd90
    FMUL float ptr [EAX + 0x10]         ; 0044fd96
    FADDP                               ; 0044fd99
    FILD dword ptr [EBP + 0x14c4]       ; 0044fd9b
    FMUL float ptr [EAX + 0x1c]         ; 0044fda1
    FADDP                               ; 0044fda4
    FILD dword ptr [EBP + 0x14bc]       ; 0044fda6
    FXCH                                ; 0044fdac
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fdae
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x194]       ; 0044fdb3
    FMUL float ptr [EAX + 0x8]          ; 0044fdb9
    FILD dword ptr [EBP + 0x14c0]       ; 0044fdbc
    FMUL float ptr [EAX + 0x14]         ; 0044fdc2
    FADDP                               ; 0044fdc5
    FILD dword ptr [EBP + 0x14c4]       ; 0044fdc7
    FMUL float ptr [EAX + 0x20]         ; 0044fdcd
    FADDP                               ; 0044fdd0
    CALL crt_math.c_round_FUN_005c03a0  ; 0044fdd2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [EBP + 0x198]       ; 0044fdd7
    ADD ESP,0x30                        ; 0044fddd
    POP EBP                             ; 0044fde0
    RET                                 ; 0044fde1

