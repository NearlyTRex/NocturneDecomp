; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_height
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 at 005131ac
;   core_path.cpp_FUN_005140f0 at 0051412e
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005e1681
;   TerminatedCString s_queuePop_empty_queue_005e1692
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e4fed4
;   undefined4 DAT_01e501fc
;   undefined4 DAT_01e50200
;   undefined4 DAT_01e50204
;   undefined4 DAT_01e50208
;   undefined4 DAT_01e5020c
;   undefined4 DAT_01e50210
;   undefined4 DAT_01e50214
;   undefined4 DAT_01e50218
;   undefined4 DAT_01e5021c
;   undefined4 DAT_01e50220
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514140
        ;   Label: core_path.cpp_CPathMap_searchGrid_FUN_00514140
    PUSH ESI                            ; 00514141
    PUSH EDI                            ; 00514142
    PUSH EBP                            ; 00514143
    SUB ESP,0x18                        ; 00514144
    MOV EBX,dword ptr [0x01e5ec70]      ; 00514147 | DAT_01e5ec70
    PUSH 0x2774                         ; 0051414d
    PUSH 0x0                            ; 00514152
    PUSH 0x1e5ec78                      ; 00514154
    MOV ESI,0x1                         ; 00514159
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0051415e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x01e501fc]      ; 00514163 | DAT_01e501fc
    MOV EBX,dword ptr [0x01e50200]      ; 00514169 | DAT_01e50200
    ADD ESP,0xc                         ; 0051416f
    MOV dword ptr [0x01e613ec],ESI      ; 00514172 | DAT_01e613ec
    XOR EDX,EDX                         ; 00514178
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051417a
    MOV dword ptr [0x01e5ec6c],EDX      ; 00514181 | DAT_01e5ec6c
    SUB EAX,EBX                         ; 00514187
    MOV dword ptr [ESP + 0x4],ESI       ; 00514189
    SHL EAX,0x3                         ; 0051418d
    MOV dword ptr [0x01e5020c],ECX      ; 00514190 | DAT_01e5020c
    ADD EAX,EBX                         ; 00514196
    MOV DL,byte ptr [ESP + 0x4]         ; 00514198
    MOV dword ptr [0x01e50214],EBX      ; 0051419c | DAT_01e50214
    MOV byte ptr [ECX + EAX*0x4 + 0x1e5ec78],DL ; 005141a2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005141a9
    MOV EBX,ESI                         ; 005141ad
    MOV [0x01e50210],EAX                ; 005141af | DAT_01e50210
    IMUL EAX,dword ptr [0x01e50208],0x64 ; 005141b4 | DAT_01e50208
        ;   Label: LAB_005141b4
    ADD EAX,dword ptr [0x01e50204]      ; 005141bb | DAT_01e50204
    CMP byte ptr [EAX + 0x1e5ec78],0x0  ; 005141c1
    JNZ 0x005142f9                      ; 005141c8
        ;   XREF to: 005142f9 (CONDITIONAL_JUMP)  ; LAB_005142f9
    LEA ESI,[ESP + 0xc]                 ; 005141ce
    LEA EBP,[ESP + 0x10]                ; 005141d2
    LEA EDI,[ESP + 0x8]                 ; 005141d6
    MOV EAX,[0x01e5ec6c]                ; 005141da | DAT_01e5ec6c
    MOV dword ptr [0x01e5ec70],EBX      ; 005141df | DAT_01e5ec70
    CMP EAX,EBX                         ; 005141e5
    JZ 0x00514300                       ; 005141e7
        ;   XREF to: 00514300 (CONDITIONAL_JUMP)  ; LAB_00514300
    IMUL EAX,dword ptr [0x01e5ec6c],0xc ; 005141ed | DAT_01e5ec6c
        ;   Label: LAB_005141ed
    MOV EDX,dword ptr [EAX + 0x1e5020c] ; 005141f4 | DAT_01e5020c | DAT_01e50218
    MOV dword ptr [EDI],EDX             ; 005141fa
    MOV EDX,dword ptr [EAX + 0x1e50210] ; 005141fc | DAT_01e50210 | DAT_01e5021c
    MOV ECX,dword ptr [0x01e5ec6c]      ; 00514202 | DAT_01e5ec6c
    MOV dword ptr [ESI],EDX             ; 00514208
    INC ECX                             ; 0051420a
    MOV EAX,dword ptr [EAX + 0x1e50214] ; 0051420b | DAT_01e50214 | DAT_01e50220
    MOV dword ptr [0x01e5ec6c],ECX      ; 00514211 | DAT_01e5ec6c
    MOV dword ptr [EBP],EAX             ; 00514217
    CMP ECX,0x1388                      ; 0051421a
    JL 0x0051422a                       ; 00514220
        ;   XREF to: 0051422a (CONDITIONAL_JUMP)  ; LAB_0051422a
    XOR EDI,EDI                         ; 00514222
    MOV dword ptr [0x01e5ec6c],EDI      ; 00514224 | DAT_01e5ec6c
    MOV EBP,dword ptr [ESP + 0xc]       ; 0051422a
        ;   Label: LAB_0051422a
    PUSH EBP                            ; 0051422e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051422f
    PUSH EAX                            ; 00514233
    MOV EAX,dword ptr [ESP + 0x18]      ; 00514234
    INC EAX                             ; 00514238
    PUSH EAX                            ; 00514239
    MOV EDX,dword ptr [ESP + 0x38]      ; 0051423a
    PUSH EDX                            ; 0051423e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051423f
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00514244
    MOV EBP,EAX                         ; 00514247
    MOV ECX,dword ptr [ESP + 0xc]       ; 00514249
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051424d
    PUSH ECX                            ; 00514251
    INC EAX                             ; 00514252
    PUSH EAX                            ; 00514253
    MOV ESI,dword ptr [ESP + 0x18]      ; 00514254
    PUSH ESI                            ; 00514258
    MOV EDI,dword ptr [ESP + 0x38]      ; 00514259
    PUSH EDI                            ; 0051425d
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051425e
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00514263
    MOV EDI,EAX                         ; 00514266
    MOV EAX,dword ptr [ESP + 0xc]       ; 00514268
    PUSH EAX                            ; 0051426c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051426d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00514271
    PUSH EDX                            ; 00514275
    DEC EAX                             ; 00514276
    PUSH EAX                            ; 00514277
    MOV ECX,dword ptr [ESP + 0x38]      ; 00514278
    PUSH ECX                            ; 0051427c
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051427d
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00514282
    MOV ESI,EAX                         ; 00514285
    MOV EAX,dword ptr [ESP + 0xc]       ; 00514287
    PUSH EAX                            ; 0051428b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051428c
    DEC EAX                             ; 00514290
    PUSH EAX                            ; 00514291
    MOV EDX,dword ptr [ESP + 0x18]      ; 00514292
    PUSH EDX                            ; 00514296
    MOV ECX,dword ptr [ESP + 0x38]      ; 00514297
    PUSH ECX                            ; 0051429b
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051429c
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    MOV EDX,dword ptr [0x01e501fc]      ; 005142a1 | DAT_01e501fc
    ADD ESP,0x10                        ; 005142a7
    MOV ECX,EAX                         ; 005142aa
    CMP EDX,dword ptr [ESP + 0x8]       ; 005142ac
    JZ 0x00514327                       ; 005142b0
        ;   XREF to: 00514327 (CONDITIONAL_JUMP)  ; LAB_00514327
    MOV EAX,dword ptr [ESP + 0x8]       ; 005142b2
        ;   Label: LAB_005142b2
    CMP EAX,dword ptr [0x01e50204]      ; 005142b6 | DAT_01e50204
    JZ 0x00514585                       ; 005142bc
        ;   XREF to: 00514585 (CONDITIONAL_JUMP)  ; LAB_00514585
    MOV EAX,dword ptr [ESP + 0xc]       ; 005142c2
        ;   Label: LAB_005142c2
    MOV EDX,dword ptr [0x01e4fed4]      ; 005142c6 | DAT_01e4fed4
    SUB EAX,EBP                         ; 005142cc
    CMP EAX,EDX                         ; 005142ce
    JL 0x0051459a                       ; 005142d0
        ;   XREF to: 0051459a (CONDITIONAL_JUMP)  ; LAB_0051459a
    MOV EBX,dword ptr [0x01e5ec70]      ; 005142d6 | DAT_01e5ec70
        ;   Label: LAB_005142d6
    MOV EAX,[0x01e5ec6c]                ; 005142dc | DAT_01e5ec6c
    CMP EAX,EBX                         ; 005142e1
    JNZ 0x005141b4                      ; 005142e3
        ;   XREF to: 005141b4 (CONDITIONAL_JUMP)  ; LAB_005141b4
    XOR EAX,EBX                         ; 005142e9
    MOV dword ptr [0x01e5ec70],EBX      ; 005142eb | DAT_01e5ec70
        ;   Label: LAB_005142eb
    ADD ESP,0x18                        ; 005142f1
    POP EBP                             ; 005142f4
    POP EDI                             ; 005142f5
    POP ESI                             ; 005142f6
    POP EBX                             ; 005142f7
    RET                                 ; 005142f8
    MOV EAX,0x1                         ; 005142f9
        ;   Label: LAB_005142f9
    JMP 0x005142eb                      ; 005142fe
        ;   XREF to: 005142eb (UNCONDITIONAL_JUMP)  ; LAB_005142eb
    MOV ECX,0x5e1681                    ; 00514300 | = "..\\core\\path.cpp"
        ;   Label: LAB_00514300
    MOV EAX,0xdf                        ; 00514305
    PUSH 0x5e1692                       ; 0051430a | = "queuePop - empty queue?!"
    MOV dword ptr [0x01d046a0],ECX      ; 0051430f | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00514315 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051431a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051431f
    JMP 0x005141ed                      ; 00514322
        ;   XREF to: 005141ed (UNCONDITIONAL_JUMP)  ; LAB_005141ed
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514327
        ;   Label: LAB_00514327
    CMP EAX,dword ptr [0x01e50200]      ; 0051432b | DAT_01e50200
    JNZ 0x005142b2                      ; 00514331
        ;   XREF to: 005142b2 (CONDITIONAL_JUMP)  ; LAB_005142b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514337
        ;   Label: LAB_00514337
    CMP EAX,0x63                        ; 0051433b
    JGE 0x005143d0                      ; 0051433e
        ;   XREF to: 005143d0 (CONDITIONAL_JUMP)  ; LAB_005143d0
    INC EAX                             ; 00514344
    IMUL EAX,EAX,0x64                   ; 00514345
    ADD EAX,dword ptr [ESP + 0x8]       ; 00514348
    CMP byte ptr [EAX + 0x1e5ec78],0x0  ; 0051434c
    JNZ 0x005143d0                      ; 00514353
        ;   XREF to: 005143d0 (CONDITIONAL_JUMP)  ; LAB_005143d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00514359
    MOV EAX,EBP                         ; 0051435d
    SUB EAX,EDX                         ; 0051435f
    CDQ                                 ; 00514361
    XOR EAX,EDX                         ; 00514362
    SUB EAX,EDX                         ; 00514364
    CMP EAX,dword ptr [0x01e4fed4]      ; 00514366 | DAT_01e4fed4
    JGE 0x005143d0                      ; 0051436c
        ;   XREF to: 005143d0 (CONDITIONAL_JUMP)  ; LAB_005143d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051436e
    INC EAX                             ; 00514372
    MOV dword ptr [ESP + 0x14],EAX      ; 00514373
    IMUL EAX,EAX,0x64                   ; 00514377
    ADD EAX,dword ptr [ESP + 0x8]       ; 0051437a
    MOV EDX,0x1                         ; 0051437e
    MOV EBX,dword ptr [0x01e5ec70]      ; 00514383 | DAT_01e5ec70
    MOV byte ptr [EAX + 0x1e5ec78],DL   ; 00514389
    IMUL EDX,EBX,0xc                    ; 0051438f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514392
    MOV dword ptr [EDX + 0x1e5020c],EAX ; 00514396 | DAT_01e50218
    INC EBX                             ; 0051439c
    MOV dword ptr [EDX + 0x1e50210],EBP ; 0051439d | DAT_01e5021c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005143a3
    MOV EBP,dword ptr [0x01e613ec]      ; 005143a7 | DAT_01e613ec
    MOV dword ptr [0x01e5ec70],EBX      ; 005143ad | DAT_01e5ec70
    INC EBP                             ; 005143b3
    MOV dword ptr [EDX + 0x1e50214],EAX ; 005143b4 | DAT_01e50220
    MOV dword ptr [0x01e613ec],EBP      ; 005143ba | DAT_01e613ec
    CMP EBX,0x1388                      ; 005143c0
    JL 0x005143d0                       ; 005143c6
        ;   XREF to: 005143d0 (CONDITIONAL_JUMP)  ; LAB_005143d0
    XOR EBX,EBX                         ; 005143c8
    MOV dword ptr [0x01e5ec70],EBX      ; 005143ca | DAT_01e5ec70
    CMP dword ptr [ESP + 0x8],0x63      ; 005143d0
        ;   Label: LAB_005143d0
    JGE 0x00514457                      ; 005143d5
        ;   XREF to: 00514457 (CONDITIONAL_JUMP)  ; LAB_00514457
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 005143db
    ADD EAX,dword ptr [ESP + 0x8]       ; 005143e0
    CMP byte ptr [EAX + 0x1e5ec79],0x0  ; 005143e4
    JNZ 0x00514457                      ; 005143eb
        ;   XREF to: 00514457 (CONDITIONAL_JUMP)  ; LAB_00514457
    MOV EDX,dword ptr [ESP + 0xc]       ; 005143ed
    MOV EAX,EDI                         ; 005143f1
    SUB EAX,EDX                         ; 005143f3
    CDQ                                 ; 005143f5
    XOR EAX,EDX                         ; 005143f6
    SUB EAX,EDX                         ; 005143f8
    CMP EAX,dword ptr [0x01e4fed4]      ; 005143fa | DAT_01e4fed4
    JGE 0x00514457                      ; 00514400
        ;   XREF to: 00514457 (CONDITIONAL_JUMP)  ; LAB_00514457
    MOV EBP,dword ptr [ESP + 0x10]      ; 00514402
    IMUL EBX,EBP,0x64                   ; 00514406
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514409
    MOV EDX,0x3                         ; 0051440d
    MOV byte ptr [EBX + EAX*0x1 + 0x1e5ec79],DL ; 00514412
    MOV EBX,dword ptr [0x01e5ec70]      ; 00514419 | DAT_01e5ec70
    IMUL EDX,EBX,0xc                    ; 0051441f
    INC EAX                             ; 00514422
    MOV dword ptr [EDX + 0x1e5020c],EAX ; 00514423 | DAT_01e50224
    INC EBX                             ; 00514429
    MOV dword ptr [EDX + 0x1e50210],EDI ; 0051442a | DAT_01e50228
    MOV EAX,[0x01e613ec]                ; 00514430 | DAT_01e613ec
    MOV dword ptr [EDX + 0x1e50214],EBP ; 00514435 | DAT_01e5022c
    INC EAX                             ; 0051443b
    MOV dword ptr [0x01e5ec70],EBX      ; 0051443c | DAT_01e5ec70
    MOV [0x01e613ec],EAX                ; 00514442 | DAT_01e613ec
    CMP EBX,0x1388                      ; 00514447
    JL 0x00514457                       ; 0051444d
        ;   XREF to: 00514457 (CONDITIONAL_JUMP)  ; LAB_00514457
    XOR EBX,EBX                         ; 0051444f
    MOV dword ptr [0x01e5ec70],EBX      ; 00514451 | DAT_01e5ec70
    MOV EDX,dword ptr [ESP + 0x10]      ; 00514457
        ;   Label: LAB_00514457
    TEST EDX,EDX                        ; 0051445b
    JLE 0x005144e5                      ; 0051445d
        ;   XREF to: 005144e5 (CONDITIONAL_JUMP)  ; LAB_005144e5
    LEA EAX,[EDX + -0x1]                ; 00514463
    IMUL EAX,EAX,0x64                   ; 00514466
    ADD EAX,dword ptr [ESP + 0x8]       ; 00514469
    CMP byte ptr [EAX + 0x1e5ec78],0x0  ; 0051446d
    JNZ 0x005144e5                      ; 00514474
        ;   XREF to: 005144e5 (CONDITIONAL_JUMP)  ; LAB_005144e5
    MOV EBP,dword ptr [ESP + 0xc]       ; 00514476
    MOV EAX,ESI                         ; 0051447a
    SUB EAX,EBP                         ; 0051447c
    CDQ                                 ; 0051447e
    XOR EAX,EDX                         ; 0051447f
    SUB EAX,EDX                         ; 00514481
    CMP EAX,dword ptr [0x01e4fed4]      ; 00514483 | DAT_01e4fed4
    JGE 0x005144e5                      ; 00514489
        ;   XREF to: 005144e5 (CONDITIONAL_JUMP)  ; LAB_005144e5
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051448b
    DEC EDI                             ; 0051448f
    IMUL EDX,EDI,0x64                   ; 00514490
    ADD EDX,dword ptr [ESP + 0x8]       ; 00514493
    MOV EAX,0x2                         ; 00514497
    MOV EBX,dword ptr [0x01e5ec70]      ; 0051449c | DAT_01e5ec70
    MOV byte ptr [EDX + 0x1e5ec78],AL   ; 005144a2
    IMUL EDX,EBX,0xc                    ; 005144a8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005144ab
    MOV dword ptr [EDX + 0x1e5020c],EAX ; 005144af | DAT_01e50230
    INC EBX                             ; 005144b5
    MOV dword ptr [EDX + 0x1e50210],ESI ; 005144b6 | DAT_01e50234
    MOV ESI,dword ptr [0x01e613ec]      ; 005144bc | DAT_01e613ec
    MOV dword ptr [EDX + 0x1e50214],EDI ; 005144c2 | DAT_01e50238
    INC ESI                             ; 005144c8
    MOV dword ptr [0x01e5ec70],EBX      ; 005144c9 | DAT_01e5ec70
    MOV dword ptr [0x01e613ec],ESI      ; 005144cf | DAT_01e613ec
    CMP EBX,0x1388                      ; 005144d5
    JL 0x005144e5                       ; 005144db
        ;   XREF to: 005144e5 (CONDITIONAL_JUMP)  ; LAB_005144e5
    XOR EBX,EBX                         ; 005144dd
    MOV dword ptr [0x01e5ec70],EBX      ; 005144df | DAT_01e5ec70
    MOV EDI,dword ptr [ESP + 0x8]       ; 005144e5
        ;   Label: LAB_005144e5
    TEST EDI,EDI                        ; 005144e9
    JLE 0x005142d6                      ; 005144eb
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 005144f1
    ADD EAX,EDI                         ; 005144f6
    CMP byte ptr [EAX + 0x1e5ec77],0x0  ; 005144f8
    JNZ 0x005142d6                      ; 005144ff
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    MOV ESI,dword ptr [ESP + 0xc]       ; 00514505
    MOV EAX,ECX                         ; 00514509
    SUB EAX,ESI                         ; 0051450b
    CDQ                                 ; 0051450d
    XOR EAX,EDX                         ; 0051450e
    SUB EAX,EDX                         ; 00514510
    CMP EAX,dword ptr [0x01e4fed4]      ; 00514512 | DAT_01e4fed4
    JGE 0x005142d6                      ; 00514518
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    IMUL EDX,dword ptr [ESP + 0x10],0x64 ; 0051451e
    MOV dword ptr [ESP],0x4             ; 00514523
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051452a
    MOV BL,byte ptr [ESP]               ; 0051452e
    MOV byte ptr [EDX + EAX*0x1 + 0x1e5ec77],BL ; 00514531
    MOV EBX,dword ptr [0x01e5ec70]      ; 00514538 | DAT_01e5ec70
    IMUL EDX,EBX,0xc                    ; 0051453e
    MOV ESI,dword ptr [0x01e613ec]      ; 00514541 | DAT_01e613ec
    INC ESI                             ; 00514547
    DEC EAX                             ; 00514548
    MOV dword ptr [0x01e613ec],ESI      ; 00514549 | DAT_01e613ec
    MOV dword ptr [EDX + 0x1e5020c],EAX ; 0051454f | DAT_01e5023c
    INC EBX                             ; 00514555
    MOV dword ptr [EDX + 0x1e50210],ECX ; 00514556 | DAT_01e50240
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051455c
    MOV dword ptr [0x01e5ec70],EBX      ; 00514560 | DAT_01e5ec70
    MOV dword ptr [EDX + 0x1e50214],EAX ; 00514566 | DAT_01e50244
    CMP EBX,0x1388                      ; 0051456c
    JL 0x005142d6                       ; 00514572
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    XOR EBX,EBX                         ; 00514578
    MOV dword ptr [0x01e5ec70],EBX      ; 0051457a | DAT_01e5ec70
    JMP 0x005142d6                      ; 00514580
        ;   XREF to: 005142d6 (UNCONDITIONAL_JUMP)  ; LAB_005142d6
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514585
        ;   Label: LAB_00514585
    CMP EAX,dword ptr [0x01e50208]      ; 00514589 | DAT_01e50208
    JNZ 0x005142c2                      ; 0051458f
        ;   XREF to: 005142c2 (CONDITIONAL_JUMP)  ; LAB_005142c2
    JMP 0x00514337                      ; 00514595
        ;   XREF to: 00514337 (UNCONDITIONAL_JUMP)  ; LAB_00514337
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051459a
        ;   Label: LAB_0051459a
    SUB EAX,ESI                         ; 0051459e
    CMP EAX,EDX                         ; 005145a0
    JGE 0x005142d6                      ; 005145a2
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005145a8
    SUB EAX,EDI                         ; 005145ac
    CMP EAX,EDX                         ; 005145ae
    JGE 0x005142d6                      ; 005145b0
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005145b6
    SUB EAX,ECX                         ; 005145ba
    CMP EAX,EDX                         ; 005145bc
    JGE 0x005142d6                      ; 005145be
        ;   XREF to: 005142d6 (CONDITIONAL_JUMP)  ; LAB_005142d6
    JMP 0x00514337                      ; 005145c4
        ;   XREF to: 00514337 (UNCONDITIONAL_JUMP)  ; LAB_00514337

