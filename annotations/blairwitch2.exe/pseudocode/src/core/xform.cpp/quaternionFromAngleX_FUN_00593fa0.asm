; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[17]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40 at 00429b7e
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0d64
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0 at 00455a27
;   core_doc.cpp_FUN_00450c60 at 00451749
;   core_doc.cpp_FUN_00453d80 at 00453fa3
;   core_doc.cpp_FUN_00455d10 at 00455e26
;   core_doc.cpp_FUN_004562a0 at 00456324
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afbb5
;   core_hpatrol.cpp_CPatrolPoint_process_FUN_0059c680 at 0059c78c
;   core_icepick.cpp_FUN_004d5470 at 004d553d
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_005eedaa
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593fa0
        ;   Label: core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
    SUB ESP,0x18                        ; 00593fa1
    MOV EDX,ESI                         ; 00593fa4
    FLD float ptr [ESP + 0x20]          ; 00593fa6
    FMUL float ptr [0x005eedaa]         ; 00593faa | DAT_005eedaa
    FLD ST0                             ; 00593fb0
    FCOS                                ; 00593fb2
    FXCH                                ; 00593fb4
    FSIN                                ; 00593fb6
    MOV EDI,ESI                         ; 00593fb8
    XOR ECX,ECX                         ; 00593fba
    MOV ESI,ESP                         ; 00593fbc
    MOV dword ptr [ESP + 0x8],ECX       ; 00593fbe
    MOV dword ptr [ESP + 0xc],ECX       ; 00593fc2
    FXCH                                ; 00593fc6
    FSTP float ptr [ESP]                ; 00593fc8
    FSTP float ptr [ESP + 0x4]          ; 00593fcb
    MOVSD ES:EDI,ESI                    ; 00593fcf
    MOVSD ES:EDI,ESI                    ; 00593fd0
    MOVSD ES:EDI,ESI                    ; 00593fd1
    MOVSD ES:EDI,ESI                    ; 00593fd2
    MOV EAX,EDX                         ; 00593fd3
    ADD ESP,0x18                        ; 00593fd5
    POP EDI                             ; 00593fd8
    RET                                 ; 00593fd9

