; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * core_platfrm_cpp_CPlatform_ctor_FUN_005110e0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_platfrm.cpp_factoryFuncPlatform_FUN_005110b0 at 005110c3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_course.cpp_CCourse_ctor_FUN_004448d0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_xform.cpp_FUN_005860b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005110e0
        ;   Label: core_platfrm.cpp_CPlatform_ctor_FUN_005110e0
    SUB ESP,0x10                        ; 005110e1
    MOV EBX,dword ptr [ESP + 0x18]      ; 005110e4
    PUSH EDI                            ; 005110e8
    PUSH ESI                            ; 005110e9
    PUSH EBX                            ; 005110ea
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 005110eb
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005110f0
    ADD EAX,0x158                       ; 005110f3
    PUSH EAX                            ; 005110f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 005110f9
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005110fe
    ADD EAX,0x1b8                       ; 00511101
    PUSH EAX                            ; 00511106
    CALL core_course.cpp_CCourse_ctor_FUN_004448d0 ; 00511107
        ;   XREF to: 004448d0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004448d0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0051110c
    LEA EBX,[EAX + 0xfffffcf0]          ; 0051110f
    PUSH 0x5cc27d                       ; 00511115
    LEA EAX,[EBX + 0x158]               ; 0051111a
    PUSH EAX                            ; 00511120
    MOV dword ptr [EBX + 0x154],0x5e3304 ; 00511121
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0051112b
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x354],0x0      ; 00511130
    MOV byte ptr [EBX + 0x3b8],0x0      ; 00511137
    MOV byte ptr [EBX + 0x41c],0x0      ; 0051113e
    MOV byte ptr [EBX + 0x480],0x0      ; 00511145
    MOV byte ptr [EBX + 0x494],0x0      ; 0051114c
    MOV byte ptr [EBX + 0x4a8],0x0      ; 00511153
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0051115a
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00511164
    MOV dword ptr [EBX + 0x2ec],0x40000000 ; 0051116e
    MOV dword ptr [EBX + 0x2e8],0x40000000 ; 00511178
    ADD ESP,0x8                         ; 00511182
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00511185
    LEA EAX,[EBX + 0x328]               ; 0051118f
    MOV byte ptr [EBX + 0x2f0],0x0      ; 00511195
    LEA EDX,[EBX + 0x20]                ; 0051119c
    MOV ECX,EAX                         ; 0051119f
    CMP EAX,EDX                         ; 005111a1
    JNZ 0x00511279                      ; 005111a3
        ;   XREF to: 00511279 (CONDITIONAL_JUMP)  ; LAB_00511279
    LEA EAX,[EBX + 0x31c]               ; 005111a9
        ;   Label: LAB_005111a9
    CMP EAX,ECX                         ; 005111af
    JNZ 0x0051128e                      ; 005111b1
        ;   XREF to: 0051128e (CONDITIONAL_JUMP)  ; LAB_0051128e
    LEA EAX,[EBX + 0x30]                ; 005111b7
        ;   Label: LAB_005111b7
    PUSH EAX                            ; 005111ba
    LEA ESI,[ESP + 0xc]                 ; 005111bb
    CALL core_xform.cpp_FUN_005860b0    ; 005111bf
        ;   XREF to: 005860b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005860b0()
    LEA ESI,[ESP + 0xc]                 ; 005111c4
    LEA EDI,[EBX + 0x344]               ; 005111c8
    ADD ESP,0x4                         ; 005111ce
    MOVSD ES:EDI,ESI                    ; 005111d1
    MOVSD ES:EDI,ESI                    ; 005111d2
    MOVSD ES:EDI,ESI                    ; 005111d3
    MOVSD ES:EDI,ESI                    ; 005111d4
    LEA EDI,[EBX + 0x334]               ; 005111d5
    LEA ESI,[EBX + 0x344]               ; 005111db
    MOVSD ES:EDI,ESI                    ; 005111e1
    MOVSD ES:EDI,ESI                    ; 005111e2
    MOVSD ES:EDI,ESI                    ; 005111e3
    MOVSD ES:EDI,ESI                    ; 005111e4
    MOV dword ptr [EBX + 0x4c0],0x0     ; 005111e5
    MOV dword ptr [EBX + 0x4c4],0x0     ; 005111ef
    MOV dword ptr [EBX + 0x4c8],0x0     ; 005111f9
    MOV byte ptr [EBX + 0x4cc],0x0      ; 00511203
    MOV dword ptr [EBX + 0x724],0x0     ; 0051120a
    MOV dword ptr [EBX + 0x64],0x32     ; 00511214
    MOV dword ptr [EBX + 0x50c],0x0     ; 0051121b
    MOV EAX,EBX                         ; 00511225
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00511227
    LEA EDX,[EBX + 0x208]               ; 00511231
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00511237
    POP ESI                             ; 00511241
    POP EDI                             ; 00511242
    ADD EAX,0x34                        ; 00511243
        ;   Label: LAB_00511243
    MOV dword ptr [EAX + 0x4e8],0x0     ; 00511246
    CMP EAX,EDX                         ; 00511250
    JNZ 0x00511243                      ; 00511252
        ;   XREF to: 00511243 (CONDITIONAL_JUMP)  ; LAB_00511243
    MOV dword ptr [EBX + 0x514],0x0     ; 00511254
    MOV dword ptr [EBX + 0x518],0x1     ; 0051125e
    MOV EAX,EBX                         ; 00511268
    MOV dword ptr [EBX + 0x510],0x0     ; 0051126a
    ADD ESP,0x10                        ; 00511274
    POP EBX                             ; 00511277
    RET                                 ; 00511278
    MOV ESI,dword ptr [EDX]             ; 00511279
        ;   Label: LAB_00511279
    MOV dword ptr [EAX],ESI             ; 0051127b
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051127d
    MOV dword ptr [EAX + 0x4],ESI       ; 00511280
    MOV ESI,dword ptr [EDX + 0x8]       ; 00511283
    MOV dword ptr [EAX + 0x8],ESI       ; 00511286
    JMP 0x005111a9                      ; 00511289
        ;   XREF to: 005111a9 (UNCONDITIONAL_JUMP)  ; LAB_005111a9
    MOV EDX,dword ptr [ECX]             ; 0051128e
        ;   Label: LAB_0051128e
    MOV dword ptr [EAX],EDX             ; 00511290
    MOV EDX,dword ptr [ECX + 0x4]       ; 00511292
    MOV dword ptr [EAX + 0x4],EDX       ; 00511295
    MOV EDX,dword ptr [ECX + 0x8]       ; 00511298
    MOV dword ptr [EAX + 0x8],EDX       ; 0051129b
    JMP 0x005111b7                      ; 0051129e
        ;   XREF to: 005111b7 (UNCONDITIONAL_JUMP)  ; LAB_005111b7

