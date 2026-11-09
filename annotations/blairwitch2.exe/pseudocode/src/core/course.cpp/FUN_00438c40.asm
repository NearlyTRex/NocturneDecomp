; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_FUN_00438c40(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CVector3f *      Stack[0x10]:4   out_euler
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_bat.cpp_FUN_004114e0 at 0041157f
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60 at 004acfde
;   core_marquee.cpp_FUN_004e7d50 at 004e7dc4
;   core_marquee.cpp_FUN_004e8180 at 004e8240
;   core_platfrm.cpp_FUN_00518310 at 00518488
;   core_vehicle.cpp_FUN_00583f20 at 00583f77
;
; Called Functions:
;   core_course.cpp_FUN_00438cf0
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438c40
        ;   Label: core_course.cpp_FUN_00438c40
    PUSH ESI                            ; 00438c41
    PUSH EDI                            ; 00438c42
    SUB ESP,0x88                        ; 00438c43
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00438c49
    LEA EAX,[ESP + 0x60]                ; 00438c50
    PUSH EAX                            ; 00438c54
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00438c55
    PUSH EDX                            ; 00438c5c
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00438c5d
    PUSH dword ptr [ESP + 0xa4]         ; 00438c64
    PUSH ECX                            ; 00438c6b
    CALL core_course.cpp_FUN_00438cf0   ; 00438c6c
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438cf0(CCourse * this_ptr, float time, CVector3f * out_pos, CQuaternion4f * out_orient)
    ADD ESP,0x10                        ; 00438c71
    LEA EAX,[ESP + 0x60]                ; 00438c74
    PUSH EAX                            ; 00438c78
    LEA ESI,[ESP + 0x4]                 ; 00438c79
    LEA EDI,[ESP + 0x34]                ; 00438c7d
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 00438c81
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 00438c86
    LEA ESI,[ESP + 0x4]                 ; 00438c8b
    ADD ESP,0x4                         ; 00438c8f
    LEA EAX,[ESP + 0x30]                ; 00438c92
    MOVSD.REP ES:EDI,ESI                ; 00438c96
    PUSH EAX                            ; 00438c98
    LEA ESI,[ESP + 0x74]                ; 00438c99
    LEA EDI,[ESP + 0x80]                ; 00438c9d
    CALL core_xform.cpp_FUN_00591de0    ; 00438ca4
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[ESP + 0x74]                ; 00438ca9
    ADD ESP,0x4                         ; 00438cad
    LEA EAX,[ESP + 0x7c]                ; 00438cb0
    MOVSD ES:EDI,ESI                    ; 00438cb4
    MOVSD ES:EDI,ESI                    ; 00438cb5
    MOVSD ES:EDI,ESI                    ; 00438cb6
    CMP EBX,EAX                         ; 00438cb7
    JNZ 0x00438cc5                      ; 00438cb9
        ;   XREF to: 00438cc5 (CONDITIONAL_JUMP)  ; LAB_00438cc5
    ADD ESP,0x88                        ; 00438cbb
    POP EDI                             ; 00438cc1
    POP ESI                             ; 00438cc2
    POP EBX                             ; 00438cc3
    RET                                 ; 00438cc4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00438cc5
        ;   Label: LAB_00438cc5
    MOV dword ptr [EBX],EAX             ; 00438cc9
    MOV EAX,dword ptr [ESP + 0x80]      ; 00438ccb
    MOV dword ptr [EBX + 0x4],EAX       ; 00438cd2
    MOV EAX,dword ptr [ESP + 0x84]      ; 00438cd5
    MOV dword ptr [EBX + 0x8],EAX       ; 00438cdc
    ADD ESP,0x88                        ; 00438cdf
    POP EDI                             ; 00438ce5
    POP ESI                             ; 00438ce6
    POP EBX                             ; 00438ce7
    RET                                 ; 00438ce8

