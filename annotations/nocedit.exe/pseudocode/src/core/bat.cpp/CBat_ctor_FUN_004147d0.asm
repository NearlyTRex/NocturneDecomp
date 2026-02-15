; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bat.cpp_factoryFunc_FUN_00414790 at 004147aa
;
; Referenced Globals:
;   TerminatedCString s_batpath_pth_006152db
;   undefined4 s_atpath.pth_006152dc
;   undefined4 s_tpath.pth_006152dd
;   undefined4 s_path.pth_006152de
;   TerminatedCString s_bat_kfm_006152e7
;   CDemonActor_vtable g_CBatVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004147d0
        ;   Label: core_bat.cpp_CBat_ctor_FUN_004147d0
    PUSH ESI                            ; 004147d1
    PUSH EDI                            ; 004147d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004147d3
    PUSH EBX                            ; 004147d7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004147d8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004147dd
    ADD EAX,0x178                       ; 004147e0
    PUSH EAX                            ; 004147e5
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 004147e6
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 004147eb
    ADD EAX,0x10                        ; 004147ee
    PUSH EAX                            ; 004147f1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004147f2
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffffe78]          ; 004147f7
    MOV dword ptr [EBX + 0x154],0x65a484 ; 004147fd | g_CBatVTable
    MOV dword ptr [EBX + 0x184],0x0     ; 00414807
    MOV dword ptr [EBX + 0x304],0x0     ; 00414811
    MOV ESI,0x6152db                    ; 0041481b | = "batpath.pth"
    MOV dword ptr [EBX + 0x308],0x41f00000 ; 00414820
    ADD ESP,0x4                         ; 0041482a
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 0041482d
    LEA EDI,[EBX + 0x158]               ; 00414837
    MOV dword ptr [EBX + 0x310],0x41f00000 ; 0041483d
    PUSH EDI                            ; 00414847
    MOV AL,byte ptr [ESI]               ; 00414848 | = "batpath.pth" | s_tpath.pth_006152dd
        ;   Label: LAB_00414848
    MOV byte ptr [EDI],AL               ; 0041484a
    CMP AL,0x0                          ; 0041484c
    JZ 0x00414860                       ; 0041484e
        ;   XREF to: 00414860 (CONDITIONAL_JUMP)  ; LAB_00414860
    MOV AL,byte ptr [ESI + 0x1]         ; 00414850 | s_atpath.pth_006152dc | s_path.pth_006152de
    ADD ESI,0x2                         ; 00414853
    MOV byte ptr [EDI + 0x1],AL         ; 00414856
    ADD EDI,0x2                         ; 00414859
    CMP AL,0x0                          ; 0041485c
    JNZ 0x00414848                      ; 0041485e
        ;   XREF to: 00414848 (CONDITIONAL_JUMP)  ; LAB_00414848
    POP EDI                             ; 00414860
        ;   Label: LAB_00414860
    PUSH 0x6152e7                       ; 00414861 | = "bat.kfm"
    LEA EAX,[EBX + 0x188]               ; 00414866
    PUSH EAX                            ; 0041486c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0041486d
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x314],0x0      ; 00414872
    MOV dword ptr [EBX + 0x378],0x41700000 ; 00414879
    ADD ESP,0x8                         ; 00414883
    MOV dword ptr [EBX + 0x37c],0x41f00000 ; 00414886
    MOV EAX,EBX                         ; 00414890
    MOV dword ptr [EBX + 0x384],0x0     ; 00414892
    POP EDI                             ; 0041489c
    POP ESI                             ; 0041489d
    POP EBX                             ; 0041489e
    RET                                 ; 0041489f

