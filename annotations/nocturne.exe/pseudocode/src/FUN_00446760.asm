; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00446760(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_0057b9f3
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446760
        ;   Label: FUN_00446760
    PUSH ESI                            ; 00446761
    PUSH EDI                            ; 00446762
    SUB ESP,0x34                        ; 00446763
    MOV EBX,dword ptr [ESP + 0x48]      ; 00446766
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044676a
    PUSH EDX                            ; 0044676e
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044676f
    PUSH ECX                            ; 00446773
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00446774
    PUSH ESI                            ; 00446778
    LEA ESI,[ESP + 0x18]                ; 00446779
    LEA EDI,[ESP + 0x30]                ; 0044677d
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 00446781
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x18]                ; 00446786
    ADD ESP,0xc                         ; 0044678a
    LEA EAX,[ESP + 0x24]                ; 0044678d
    MOVSD ES:EDI,ESI                    ; 00446791
    MOVSD ES:EDI,ESI                    ; 00446792
    MOVSD ES:EDI,ESI                    ; 00446793
    PUSH EAX                            ; 00446794
    MOV EDI,dword ptr [ESP + 0x48]      ; 00446795
    PUSH EDI                            ; 00446799
    LEA ESI,[ESP + 0x20]                ; 0044679a
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0 ; 0044679e
        ;   XREF to: 004411b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0()
    LEA EDI,[ESP + 0x8]                 ; 004467a3
    LEA ESI,[ESP + 0x20]                ; 004467a7
    ADD ESP,0x8                         ; 004467ab
    MOVSD ES:EDI,ESI                    ; 004467ae
    MOVSD ES:EDI,ESI                    ; 004467af
    MOVSD ES:EDI,ESI                    ; 004467b0
    MOV EAX,dword ptr [ESP]             ; 004467b1
    MOV dword ptr [ESP + 0x30],EAX      ; 004467b4
    FILD dword ptr [ESP + 0x30]         ; 004467b8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004467bc
    FLD double ptr [0x0057b9f3]         ; 004467c0 | DAT_0057b9f3
    FXCH                                ; 004467c6
    FMUL ST1                            ; 004467c8
    MOV dword ptr [ESP + 0x30],EAX      ; 004467ca
    MOV EAX,dword ptr [ESP + 0x8]       ; 004467ce
    FILD dword ptr [ESP + 0x30]         ; 004467d2
    MOV dword ptr [ESP + 0x30],EAX      ; 004467d6
    FMUL ST2                            ; 004467da
    FILD dword ptr [ESP + 0x30]         ; 004467dc
    FMULP ST3                           ; 004467e0
    FXCH                                ; 004467e2
    FSTP float ptr [EBX]                ; 004467e4
    FSTP float ptr [EBX + 0x4]          ; 004467e6
    MOV EAX,EBX                         ; 004467e9
    FSTP float ptr [EBX + 0x8]          ; 004467eb
    ADD ESP,0x34                        ; 004467ee
    POP EDI                             ; 004467f1
    POP ESI                             ; 004467f2
    POP EBX                             ; 004467f3
    RET                                 ; 004467f4

