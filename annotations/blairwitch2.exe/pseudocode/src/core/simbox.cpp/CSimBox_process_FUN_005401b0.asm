; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_process_FUN_005401b0(CSimBox *this_ptr,float delta_time)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005e6895
;   undefined4 DAT_005e6899
;   undefined4 DAT_005e68a1
;   undefined4 DAT_005e68a9
;   undefined4 DAT_005e68b1
;   undefined4 DAT_006141f0
;   undefined4 DAT_00617dd4
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_005b2290
;   core_dirmat.cpp_FUN_00449530
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005401b0
        ;   Label: core_simbox.cpp_CSimBox_process_FUN_005401b0
    PUSH ESI                            ; 005401b1
    PUSH EDI                            ; 005401b2
    SUB ESP,0x1c                        ; 005401b3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005401b6
    CMP dword ptr [EBX + 0x430],0x1     ; 005401ba
    JNZ 0x00540280                      ; 005401c1
        ;   XREF to: 00540280 (CONDITIONAL_JUMP)  ; LAB_00540280
    CMP dword ptr [EBX + 0x708],0x0     ; 005401c7
    JNZ 0x00540280                      ; 005401ce
        ;   XREF to: 00540280 (CONDITIONAL_JUMP)  ; LAB_00540280
    LEA EAX,[EBX + 0x438]               ; 005401d4
    PUSH EAX                            ; 005401da
    MOV ESI,dword ptr [0x006141f0]      ; 005401db | DAT_006141f0
    PUSH ESI                            ; 005401e1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005401e2
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005401e7
    TEST EAX,EAX                        ; 005401ea
    JZ 0x00540280                       ; 005401ec
        ;   XREF to: 00540280 (CONDITIONAL_JUMP)  ; LAB_00540280
    LEA EAX,[EBX + 0x500]               ; 005401f2
    LEA ESI,[EBX + 0x49c]               ; 005401f8
    MOV dword ptr [EBX + 0x708],0x1     ; 005401fe
    CMP EAX,ESI                         ; 00540208
    JZ 0x0054021c                       ; 0054020a
        ;   XREF to: 0054021c (CONDITIONAL_JUMP)  ; LAB_0054021c
    MOV EDX,dword ptr [ESI]             ; 0054020c
    MOV dword ptr [EAX],EDX             ; 0054020e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00540210
    MOV dword ptr [EAX + 0x4],EDX       ; 00540213
    MOV EDX,dword ptr [ESI + 0x8]       ; 00540216
    MOV dword ptr [EAX + 0x8],EDX       ; 00540219
    LEA EAX,[EBX + 0x524]               ; 0054021c
        ;   Label: LAB_0054021c
    LEA ESI,[EBX + 0x4a8]               ; 00540222
    CMP EAX,ESI                         ; 00540228
    JZ 0x0054023c                       ; 0054022a
        ;   XREF to: 0054023c (CONDITIONAL_JUMP)  ; LAB_0054023c
    MOV EDX,dword ptr [ESI]             ; 0054022c
    MOV dword ptr [EAX],EDX             ; 0054022e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00540230
    MOV dword ptr [EAX + 0x4],EDX       ; 00540233
    MOV EDX,dword ptr [ESI + 0x8]       ; 00540236
    MOV dword ptr [EAX + 0x8],EDX       ; 00540239
    LEA EAX,[EBX + 0x500]               ; 0054023c
        ;   Label: LAB_0054023c
    PUSH EAX                            ; 00540242
    LEA EAX,[EBX + 0x4cc]               ; 00540243
    PUSH EAX                            ; 00540249
    LEA ESI,[ESP + 0x14]                ; 0054024a
    LEA EDI,[ESP + 0x8]                 ; 0054024e
    CALL core_dirmat.cpp_FUN_00449530   ; 00540252
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x14]                ; 00540257
    ADD ESP,0x8                         ; 0054025b
    MOVSD ES:EDI,ESI                    ; 0054025e
    MOVSD ES:EDI,ESI                    ; 0054025f
    MOVSD ES:EDI,ESI                    ; 00540260
    MOV EAX,ESP                         ; 00540261
    LEA ESI,[EBX + 0x4f4]               ; 00540263
    CMP ESI,EAX                         ; 00540269
    JZ 0x00540280                       ; 0054026b
        ;   XREF to: 00540280 (CONDITIONAL_JUMP)  ; LAB_00540280
    MOV EAX,dword ptr [ESP]             ; 0054026d
    MOV dword ptr [ESI],EAX             ; 00540270
    MOV EAX,dword ptr [ESP + 0x4]       ; 00540272
    MOV dword ptr [ESI + 0x4],EAX       ; 00540276
    MOV EAX,dword ptr [ESP + 0x8]       ; 00540279
    MOV dword ptr [ESI + 0x8],EAX       ; 0054027d
    CMP dword ptr [EBX + 0x430],0x0     ; 00540280
        ;   Label: LAB_00540280
    JNZ 0x00540330                      ; 00540287
        ;   XREF to: 00540330 (CONDITIONAL_JUMP)  ; LAB_00540330
    PUSH 0x13                           ; 0054028d
    MOV EAX,[0x00617dd4]                ; 0054028f | DAT_00617dd4
    PUSH EAX                            ; 00540294
    MOV ESI,dword ptr [EAX]             ; 00540295
    CALL dword ptr [ESI]                ; 00540297
    ADD ESP,0x8                         ; 00540299
    TEST EAX,EAX                        ; 0054029c
    JZ 0x00540330                       ; 0054029e
        ;   XREF to: 00540330 (CONDITIONAL_JUMP)  ; LAB_00540330
    LEA ESI,[EBX + 0x20]                ; 005402a4
    LEA EAX,[EBX + 0x710]               ; 005402a7
    MOV EDX,dword ptr [EAX]             ; 005402ad
    MOV dword ptr [ESI],EDX             ; 005402af
    MOV EDX,dword ptr [EAX + 0x4]       ; 005402b1
    MOV dword ptr [ESI + 0x4],EDX       ; 005402b4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005402b7
    MOV dword ptr [ESI + 0x8],EDX       ; 005402ba
    CALL crt_stdlib.c_rand_FUN_005b849c ; 005402bd
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005402c2
    FILD dword ptr [ESP + 0x18]         ; 005402c6
    FMUL float ptr [0x005e6895]         ; 005402ca | DAT_005e6895
    FADD double ptr [0x005e6899]        ; 005402d0 | DAT_005e6899
    FMUL double ptr [0x005e68a1]        ; 005402d6 | DAT_005e68a1
    FSTP float ptr [EBX + 0x30]         ; 005402dc
    CALL crt_stdlib.c_rand_FUN_005b849c ; 005402df
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005402e4
    FILD dword ptr [ESP + 0x18]         ; 005402e8
    FMUL float ptr [0x005e6895]         ; 005402ec | DAT_005e6895
    FMUL float ptr [0x005e68a9]         ; 005402f2 | DAT_005e68a9
    FMUL double ptr [0x005e68b1]        ; 005402f8 | DAT_005e68b1
    FSTP float ptr [EBX + 0x38]         ; 005402fe
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00540301
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV dword ptr [ESP + 0x18],EAX      ; 00540306
    FILD dword ptr [ESP + 0x18]         ; 0054030a
    FMUL float ptr [0x005e6895]         ; 0054030e | DAT_005e6895
    FMUL float ptr [0x005e68a9]         ; 00540314 | DAT_005e68a9
    FMUL double ptr [0x005e68b1]        ; 0054031a | DAT_005e68b1
    PUSH EBX                            ; 00540320
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00540321
    FSTP float ptr [EBX + 0x34]         ; 00540327
    CALL dword ptr [EAX + 0x8]          ; 0054032a
    ADD ESP,0x4                         ; 0054032d
    CMP dword ptr [EBX + 0x708],0x0     ; 00540330
        ;   Label: LAB_00540330
    JNZ 0x00540340                      ; 00540337
        ;   XREF to: 00540340 (CONDITIONAL_JUMP)  ; LAB_00540340
    ADD ESP,0x1c                        ; 00540339
        ;   Label: LAB_00540339
    POP EDI                             ; 0054033c
    POP ESI                             ; 0054033d
    POP EBX                             ; 0054033e
    RET                                 ; 0054033f
    LEA ESI,[EBX + 0x4b4]               ; 00540340
        ;   Label: LAB_00540340
    PUSH dword ptr [ESP + 0x30]         ; 00540346
    PUSH ESI                            ; 0054034a
    CALL core_box.cpp_CBox_process_FUN_005b2290 ; 0054034b
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_005b2290(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 00540350
    MOV EDX,dword ptr [ESI]             ; 00540353
    MOV dword ptr [EAX],EDX             ; 00540355
    MOV EDX,dword ptr [ESI + 0x4]       ; 00540357
    MOV dword ptr [EAX + 0x4],EDX       ; 0054035a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054035d
    MOV dword ptr [EAX + 0x8],EDX       ; 00540360
    LEA EAX,[EBX + 0x30]                ; 00540363
    ADD EBX,0x4c0                       ; 00540366
    ADD ESP,0x8                         ; 0054036c
    CMP EAX,EBX                         ; 0054036f
    JZ 0x00540339                       ; 00540371
        ;   XREF to: 00540339 (CONDITIONAL_JUMP)  ; LAB_00540339
    MOV EDX,dword ptr [EBX]             ; 00540373
    MOV dword ptr [EAX],EDX             ; 00540375
    MOV EDX,dword ptr [EBX + 0x4]       ; 00540377
    MOV dword ptr [EAX + 0x4],EDX       ; 0054037a
    MOV EDX,dword ptr [EBX + 0x8]       ; 0054037d
    MOV dword ptr [EAX + 0x8],EDX       ; 00540380
    ADD ESP,0x1c                        ; 00540383
    POP EDI                             ; 00540386
    POP ESI                             ; 00540387
    POP EBX                             ; 00540388
    RET                                 ; 00540389

