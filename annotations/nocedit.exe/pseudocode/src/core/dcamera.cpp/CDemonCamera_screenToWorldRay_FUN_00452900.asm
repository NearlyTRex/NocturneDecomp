; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_ray
; CVector3i *      Stack[0xc]:4   screen_coords
; int              Stack[0x10]:4   depth
; Local Variables:
; int[1015]        Stack[-0x1028]:4060  aiStackY_1028
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   double g_CameraFixedPointToFloatScale = 0.00390625
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452900
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
    PUSH ESI                            ; 00452901
    PUSH EDI                            ; 00452902
    SUB ESP,0x34                        ; 00452903
    MOV EBX,dword ptr [ESP + 0x48]      ; 00452906
    MOV EDX,dword ptr [ESP + 0x50]      ; 0045290a
    PUSH EDX                            ; 0045290e
    MOV ECX,dword ptr [ESP + 0x50]      ; 0045290f
    PUSH ECX                            ; 00452913
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00452914
    PUSH ESI                            ; 00452918
    LEA ESI,[ESP + 0x18]                ; 00452919
    LEA EDI,[ESP + 0x30]                ; 0045291d
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 00452921
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x18]                ; 00452926
    ADD ESP,0xc                         ; 0045292a
    LEA EAX,[ESP + 0x24]                ; 0045292d
    MOVSD ES:EDI,ESI                    ; 00452931
    MOVSD ES:EDI,ESI                    ; 00452932
    MOVSD ES:EDI,ESI                    ; 00452933
    PUSH EAX                            ; 00452934
    MOV EDI,dword ptr [ESP + 0x48]      ; 00452935
    PUSH EDI                            ; 00452939
    LEA ESI,[ESP + 0x20]                ; 0045293a
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0045293e
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA EDI,[ESP + 0x8]                 ; 00452943
    LEA ESI,[ESP + 0x20]                ; 00452947
    ADD ESP,0x8                         ; 0045294b
    MOVSD ES:EDI,ESI                    ; 0045294e
    MOVSD ES:EDI,ESI                    ; 0045294f
    MOVSD ES:EDI,ESI                    ; 00452950
    MOV EAX,dword ptr [ESP]             ; 00452951
    MOV dword ptr [ESP + 0x30],EAX      ; 00452954
    FILD dword ptr [ESP + 0x30]         ; 00452958
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045295c
    FLD double ptr [0x0061a342]         ; 00452960 | g_CameraFixedPointToFloatScale
    FXCH                                ; 00452966
    FMUL ST1                            ; 00452968
    MOV dword ptr [ESP + 0x30],EAX      ; 0045296a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045296e
    FILD dword ptr [ESP + 0x30]         ; 00452972
    MOV dword ptr [ESP + 0x30],EAX      ; 00452976
    FMUL ST2                            ; 0045297a
    FILD dword ptr [ESP + 0x30]         ; 0045297c
    FMULP ST3                           ; 00452980
    FXCH                                ; 00452982
    FSTP float ptr [EBX]                ; 00452984
    FSTP float ptr [EBX + 0x4]          ; 00452986
    MOV EAX,EBX                         ; 00452989
    FSTP float ptr [EBX + 0x8]          ; 0045298b
    ADD ESP,0x34                        ; 0045298e
    POP EDI                             ; 00452991
    POP ESI                             ; 00452992
    POP EBX                             ; 00452993
    RET                                 ; 00452994

