; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_processInEditor_FUN_005ec5e0 at 005ec5ef
;
; Referenced Globals:
;   double DOUBLE_00655a34 = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_trigger.cpp_CTrigger_calculateTestRadius_FUN_005e0ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1180
        ;   Label: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
    SUB ESP,0x14                        ; 005e1181
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005e1184
    LEA EDX,[EBX + 0x160]               ; 005e1188
    MOV dword ptr [EBX + 0x16c],0x0     ; 005e118e
    MOV EAX,dword ptr [EDX]             ; 005e1198
    MOV dword ptr [ESP],EAX             ; 005e119a
    LEA EAX,[EDX + 0x4]                 ; 005e119d
    MOV EAX,dword ptr [EAX]             ; 005e11a0
    MOV dword ptr [ESP + 0x4],EAX       ; 005e11a2
    LEA EAX,[EDX + 0x8]                 ; 005e11a6
    MOV EAX,dword ptr [EAX]             ; 005e11a9
    PUSH 0x1d                           ; 005e11ab
    MOV dword ptr [ESP + 0xc],EAX       ; 005e11ad
    MOV EAX,[0x0067cf44]                ; 005e11b1 | g_CKeysPtr
    PUSH EAX                            ; 005e11b6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e11b7 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e11b9
    ADD ESP,0x8                         ; 005e11bb
    TEST EAX,EAX                        ; 005e11be
    JNZ 0x005e1208                      ; 005e11c0
        ;   XREF to: 005e1208 (CONDITIONAL_JUMP)  ; LAB_005e1208
    PUSH EBX                            ; 005e11c2
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005e11c3
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e11c8
    CMP dword ptr [EBX + 0x170],0x1     ; 005e11cb
        ;   Label: LAB_005e11cb
    JNZ 0x005e11fa                      ; 005e11d2
        ;   XREF to: 005e11fa (CONDITIONAL_JUMP)  ; LAB_005e11fa
    FLD float ptr [ESP]                 ; 005e11d4
    FCOMP float ptr [EBX + 0x160]       ; 005e11d7
    FNSTSW AX                           ; 005e11dd
    SAHF                                ; 005e11df
    JZ 0x005e11ee                       ; 005e11e0
        ;   XREF to: 005e11ee (CONDITIONAL_JUMP)  ; LAB_005e11ee
    MOV EAX,dword ptr [EBX + 0x160]     ; 005e11e2
    MOV dword ptr [EBX + 0x168],EAX     ; 005e11e8
    MOV EAX,dword ptr [EBX + 0x168]     ; 005e11ee
        ;   Label: LAB_005e11ee
    MOV dword ptr [EBX + 0x160],EAX     ; 005e11f4
    PUSH EBX                            ; 005e11fa
        ;   Label: LAB_005e11fa
    CALL core_trigger.cpp_CTrigger_calculateTestRadius_FUN_005e0ba0 ; 005e11fb
        ;   XREF to: 005e0ba0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_calculateTestRadius_FUN_005e0ba0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005e1200
    ADD ESP,0x14                        ; 005e1203
    POP EBX                             ; 005e1206
    RET                                 ; 005e1207
    MOV EAX,[0x0067b654]                ; 005e1208 | g_CGamePtr
        ;   Label: LAB_005e1208
    PUSH 0x4b                           ; 005e120d
    FLD float ptr [EAX + 0x264]         ; 005e120f | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 005e1215 | g_CKeysPtr
    FMUL double ptr [0x00655a34]        ; 005e121a | DOUBLE_00655a34
    PUSH EAX                            ; 005e1220 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e1221 | g_CKeysInstance
    FSTP float ptr [ESP + 0x18]         ; 005e1223
    CALL dword ptr [EDX]                ; 005e1227
    ADD ESP,0x8                         ; 005e1229
    TEST EAX,EAX                        ; 005e122c
    JZ 0x005e1240                       ; 005e122e
        ;   XREF to: 005e1240 (CONDITIONAL_JUMP)  ; LAB_005e1240
    FLD float ptr [EBX + 0x160]         ; 005e1230
    FSUB float ptr [ESP + 0x10]         ; 005e1236
    FSTP float ptr [EBX + 0x160]        ; 005e123a
    PUSH 0x4d                           ; 005e1240
        ;   Label: LAB_005e1240
    MOV EAX,[0x0067cf44]                ; 005e1242 | g_CKeysPtr
    PUSH EAX                            ; 005e1247 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e1248 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e124a
    ADD ESP,0x8                         ; 005e124c
    TEST EAX,EAX                        ; 005e124f
    JZ 0x005e1263                       ; 005e1251
        ;   XREF to: 005e1263 (CONDITIONAL_JUMP)  ; LAB_005e1263
    FLD float ptr [EBX + 0x160]         ; 005e1253
    FADD float ptr [ESP + 0x10]         ; 005e1259
    FSTP float ptr [EBX + 0x160]        ; 005e125d
    PUSH 0x1e                           ; 005e1263
        ;   Label: LAB_005e1263
    MOV EAX,[0x0067cf44]                ; 005e1265 | g_CKeysPtr
    PUSH EAX                            ; 005e126a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e126b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e126d
    ADD ESP,0x8                         ; 005e126f
    TEST EAX,EAX                        ; 005e1272
    JZ 0x005e1286                       ; 005e1274
        ;   XREF to: 005e1286 (CONDITIONAL_JUMP)  ; LAB_005e1286
    FLD float ptr [EBX + 0x164]         ; 005e1276
    FSUB float ptr [ESP + 0x10]         ; 005e127c
    FSTP float ptr [EBX + 0x164]        ; 005e1280
    PUSH 0x10                           ; 005e1286
        ;   Label: LAB_005e1286
    MOV EAX,[0x0067cf44]                ; 005e1288 | g_CKeysPtr
    PUSH EAX                            ; 005e128d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e128e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e1290
    ADD ESP,0x8                         ; 005e1292
    TEST EAX,EAX                        ; 005e1295
    JZ 0x005e12a9                       ; 005e1297
        ;   XREF to: 005e12a9 (CONDITIONAL_JUMP)  ; LAB_005e12a9
    FLD float ptr [EBX + 0x164]         ; 005e1299
    FADD float ptr [ESP + 0x10]         ; 005e129f
    FSTP float ptr [EBX + 0x164]        ; 005e12a3
    PUSH 0x50                           ; 005e12a9
        ;   Label: LAB_005e12a9
    MOV EAX,[0x0067cf44]                ; 005e12ab | g_CKeysPtr
    PUSH EAX                            ; 005e12b0 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e12b1 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e12b3
    ADD ESP,0x8                         ; 005e12b5
    TEST EAX,EAX                        ; 005e12b8
    JZ 0x005e12cc                       ; 005e12ba
        ;   XREF to: 005e12cc (CONDITIONAL_JUMP)  ; LAB_005e12cc
    FLD float ptr [EBX + 0x168]         ; 005e12bc
    FSUB float ptr [ESP + 0x10]         ; 005e12c2
    FSTP float ptr [EBX + 0x168]        ; 005e12c6
    PUSH 0x48                           ; 005e12cc
        ;   Label: LAB_005e12cc
    MOV EAX,[0x0067cf44]                ; 005e12ce | g_CKeysPtr
    PUSH EAX                            ; 005e12d3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005e12d4 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005e12d6
    ADD ESP,0x8                         ; 005e12d8
    TEST EAX,EAX                        ; 005e12db
    JZ 0x005e12ef                       ; 005e12dd
        ;   XREF to: 005e12ef (CONDITIONAL_JUMP)  ; LAB_005e12ef
    FLD float ptr [EBX + 0x168]         ; 005e12df
    FADD float ptr [ESP + 0x10]         ; 005e12e5
    FSTP float ptr [EBX + 0x168]        ; 005e12e9
    MOV EDX,0x3c23d70a                  ; 005e12ef
        ;   Label: LAB_005e12ef
    MOV ECX,dword ptr [EBX + 0x160]     ; 005e12f4
    MOV dword ptr [ESP + 0xc],EDX       ; 005e12fa
    CMP ECX,EDX                         ; 005e12fe
    JGE 0x005e1308                      ; 005e1300
        ;   XREF to: 005e1308 (CONDITIONAL_JUMP)  ; LAB_005e1308
    MOV dword ptr [EBX + 0x160],EDX     ; 005e1302
    FLD float ptr [EBX + 0x164]         ; 005e1308
        ;   Label: LAB_005e1308
    FCOMP float ptr [ESP + 0xc]         ; 005e130e
    FNSTSW AX                           ; 005e1312
    SAHF                                ; 005e1314
    JNC 0x005e1321                      ; 005e1315
        ;   XREF to: 005e1321 (CONDITIONAL_JUMP)  ; LAB_005e1321
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e1317
    MOV dword ptr [EBX + 0x164],EAX     ; 005e131b
    FLD float ptr [EBX + 0x168]         ; 005e1321
        ;   Label: LAB_005e1321
    FCOMP float ptr [ESP + 0xc]         ; 005e1327
    FNSTSW AX                           ; 005e132b
    SAHF                                ; 005e132d
    JNC 0x005e11cb                      ; 005e132e
        ;   XREF to: 005e11cb (CONDITIONAL_JUMP)  ; LAB_005e11cb
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e1334
    MOV dword ptr [EBX + 0x168],EAX     ; 005e1338
    JMP 0x005e11cb                      ; 005e133e
        ;   XREF to: 005e11cb (UNCONDITIONAL_JUMP)  ; LAB_005e11cb

