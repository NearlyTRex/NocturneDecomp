; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index_1
; int              Stack[0x10]:4   frame_index_2
; float            Stack[0x14]:4   interpolation
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_skeleton.cpp_FUN_00544f80 at 005450a0
;   core_skeleton.cpp_FUN_00545a60 at 00545b60
;   core_skeleton.cpp_FUN_00547b80 at 00547bec
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540f30
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30
    PUSH EDI                            ; 00540f31
    PUSH EBP                            ; 00540f32
    MOV EBP,ESP                         ; 00540f33
    SUB ESP,0x28                        ; 00540f35
    AND ESP,0xfffffff8                  ; 00540f38
    MOV EDI,dword ptr [EBP + 0x14]      ; 00540f3b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00540f3e
    MOV EBX,ESI                         ; 00540f41
    MOV ESI,dword ptr [EBP + 0x10]      ; 00540f43
    FLD float ptr [EBP + 0x20]          ; 00540f46
    FLDZ                                ; 00540f49
    FXCH                                ; 00540f4b
    FSTP double ptr [ESP]               ; 00540f4d
    FCOMP double ptr [ESP]              ; 00540f50
    FNSTSW AX                           ; 00540f53
    SAHF                                ; 00540f55
    JNC 0x00540f89                      ; 00540f56
        ;   XREF to: 00540f89 (CONDITIONAL_JUMP)  ; LAB_00540f89
    FLD1                                ; 00540f58
    FCOMP double ptr [ESP]              ; 00540f5a
    FNSTSW AX                           ; 00540f5d
    SAHF                                ; 00540f5f
    JA 0x00540f8f                       ; 00540f60
        ;   XREF to: 00540f8f (CONDITIONAL_JUMP)  ; LAB_00540f8f
    PUSH EDX                            ; 00540f62
    PUSH EDI                            ; 00540f63
        ;   Label: LAB_00540f63
    PUSH ESI                            ; 00540f64
    LEA EDI,[ESP + 0x14]                ; 00540f65
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10 ; 00540f69
        ;   XREF to: 00540f10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV ESI,EAX                         ; 00540f6e
    ADD ESP,0xc                         ; 00540f70
        ;   Label: LAB_00540f70
    MOVSD ES:EDI,ESI                    ; 00540f73
    MOVSD ES:EDI,ESI                    ; 00540f74
    MOVSD ES:EDI,ESI                    ; 00540f75
    MOVSD ES:EDI,ESI                    ; 00540f76
    LEA ESI,[ESP + 0x8]                 ; 00540f77
    MOV EDI,EBX                         ; 00540f7b
    MOVSD ES:EDI,ESI                    ; 00540f7d
    MOVSD ES:EDI,ESI                    ; 00540f7e
    MOVSD ES:EDI,ESI                    ; 00540f7f
    MOVSD ES:EDI,ESI                    ; 00540f80
    MOV EAX,EBX                         ; 00540f81
    MOV ESP,EBP                         ; 00540f83
    POP EBP                             ; 00540f85
    POP EDI                             ; 00540f86
    POP EBX                             ; 00540f87
    RET                                 ; 00540f88
    MOV ECX,dword ptr [EBP + 0x18]      ; 00540f89
        ;   Label: LAB_00540f89
    PUSH ECX                            ; 00540f8c
    JMP 0x00540f63                      ; 00540f8d
        ;   XREF to: 00540f63 (UNCONDITIONAL_JUMP)  ; LAB_00540f63
    PUSH dword ptr [EBP + 0x20]         ; 00540f8f
        ;   Label: LAB_00540f8f
    PUSH EDX                            ; 00540f92
    PUSH EDI                            ; 00540f93
    PUSH ESI                            ; 00540f94
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10 ; 00540f95
        ;   XREF to: 00540f10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 00540f9a
    PUSH EAX                            ; 00540f9d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00540f9e
    PUSH EDX                            ; 00540fa1
    PUSH EDI                            ; 00540fa2
    PUSH ESI                            ; 00540fa3
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10 ; 00540fa4
        ;   XREF to: 00540f10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 00540fa9
    PUSH EAX                            ; 00540fac
    LEA ESI,[ESP + 0x24]                ; 00540fad
    LEA EDI,[ESP + 0x14]                ; 00540fb1
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00540fb5
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0x24]                ; 00540fba
    JMP 0x00540f70                      ; 00540fbe
        ;   XREF to: 00540f70 (UNCONDITIONAL_JUMP)  ; LAB_00540f70

