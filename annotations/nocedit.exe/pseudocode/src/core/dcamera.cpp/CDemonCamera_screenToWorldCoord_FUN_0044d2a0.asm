; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   output_ptr
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 at 00454408
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 at 0044e41b
;   core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900 at 00452921
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da2ea
;   core_msnedit.cpp_FUN_00535c60 at 00535c82
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e5e6
;   core_setedit.cpp_CDemonSet_FUN_005800d0 at 0058011a
;   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 at 0057fdc5
;   core_sound.cpp_updateListeners_FUN_005b1870 at 005b1c1b
;
; Referenced Globals:
;   uint*[1024] g_ZBufferScanlineArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d2a0
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
    PUSH EDI                            ; 0044d2a1
    SUB ESP,0xc                         ; 0044d2a2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044d2a5
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044d2a9
    MOV ECX,ESI                         ; 0044d2ad
    MOV EBX,EAX                         ; 0044d2af
    SHL EBX,0x10                        ; 0044d2b1
    MOV dword ptr [ESP],EBX             ; 0044d2b4
    MOV EBX,EDX                         ; 0044d2b7
    MOV EDX,dword ptr [EDX*0x4 + 0x2cf7d5c] ; 0044d2b9 | g_ZBufferScanlineArray
    SHL EBX,0x10                        ; 0044d2c0
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0044d2c3
    MOV dword ptr [ESP + 0x4],EBX       ; 0044d2c6
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d2ca
    TEST EAX,EAX                        ; 0044d2ce
    JNZ 0x0044d2e9                      ; 0044d2d0
        ;   XREF to: 0044d2e9 (CONDITIONAL_JUMP)  ; LAB_0044d2e9
    MOV dword ptr [ESP + 0x8],0x7fffffff ; 0044d2d2
    MOV ESI,ESP                         ; 0044d2da
    MOV EDI,ECX                         ; 0044d2dc
    MOVSD ES:EDI,ESI                    ; 0044d2de
    MOVSD ES:EDI,ESI                    ; 0044d2df
    MOVSD ES:EDI,ESI                    ; 0044d2e0
    MOV EAX,ECX                         ; 0044d2e1
    ADD ESP,0xc                         ; 0044d2e3
    POP EDI                             ; 0044d2e6
    POP EBX                             ; 0044d2e7
    RET                                 ; 0044d2e8
    MOV EAX,0x7fffffff                  ; 0044d2e9
        ;   Label: LAB_0044d2e9
    MOV EDX,EAX                         ; 0044d2ee
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044d2f0
    SAR EDX,0x1f                        ; 0044d2f4
    IDIV EBX                            ; 0044d2f7
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d2f9
    MOV ESI,ESP                         ; 0044d2fd
    MOV EDI,ECX                         ; 0044d2ff
    MOVSD ES:EDI,ESI                    ; 0044d301
    MOVSD ES:EDI,ESI                    ; 0044d302
    MOVSD ES:EDI,ESI                    ; 0044d303
    MOV EAX,ECX                         ; 0044d304
    ADD ESP,0xc                         ; 0044d306
    POP EDI                             ; 0044d309
    POP EBX                             ; 0044d30a
    RET                                 ; 0044d30b

